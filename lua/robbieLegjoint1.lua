baseHandle,cyclePos,movementHorizontalSpan,movementHorizontalShift,movementVerticalSpan,movementPhase,rotation=... 



if (sim_call_type==sim_childscriptcall_initialization) then 
    modulePos=simGetScriptSimulationParameter(sim_handle_self,'modulePosition')

    tip=simGetObjectHandle('robbieFootTip')

    target=simGetObjectHandle('robbieFootTarget')

    j1=simGetObjectHandle('robbieLegJoint1')

    j2=simGetObjectHandle('robbieLegJoint2')

    j3=simGetObjectHandle('robbieLegJoint3')

    simSetJointPosition(j2,0)

    if (modulePos==1)or(modulePos==3) then

        simSetJointPosition(j1,-13.99*math.pi/180)

        simSetJointPosition(j3,38.72*math.pi/180)

    else

        simSetJointPosition(j1,14.95*math.pi/180)

        simSetJointPosition(j3,-42.37*math.pi/180)

    end

end 


if (sim_call_type==sim_childscriptcall_cleanup) then 
 
end 


if (sim_call_type==sim_childscriptcall_actuation) then 
    if not notFirstHere then

        footOriginalPos=simGetObjectPosition(tip,baseHandle)

        isf=simGetObjectSizeFactor(baseHandle)

        if (modulePos==0)or(modulePos==2) then

            footOriginalPos[2]=footOriginalPos[2]-0.02*isf

        end

        notFirstHere=true

    end

    

    p=cyclePos+modulePos*movementPhase

    if (p>=5) then

        p=p-5

    end

    

    if (p<4) then

        -- The foot moves back

        x=0

        y=movementHorizontalShift+movementHorizontalSpan*(2-p)/4

        z=0

    else

        -- The foot moves forward

        x=0

        y=movementHorizontalShift+movementHorizontalSpan*(p-4.5)

        z=movementVerticalSpan*(1-2*math.abs(p-4.5))

    end

    

    if (modulePos==1)or(modulePos==3) then

        rotation=-rotation

    end

    m=simBuildMatrix({0,0,0},{0,0,rotation})

    footPos=simMultiplyVector(m,{x,y,z})

    x=footPos[1]

    y=footPos[2]

    z=footPos[3]

    

    -- Make sure that scaling during simulation will work flawlessly:

    sf=simGetObjectSizeFactor(baseHandle)

    af=sf/isf

    

    footPos={footOriginalPos[1]*af+x*sf,footOriginalPos[2]*af+y*sf,footOriginalPos[3]*af+z*sf}

    simSetObjectPosition(target,baseHandle,footPos)

end 

