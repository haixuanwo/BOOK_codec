-- This cat model demonstrates distributed control, where each leg is controlled by its own script

-- This is meant as an example only. Have a look at the control method of the "ant hexapod", that is much simpler.



if (sim_call_type==sim_childscriptcall_initialization) then 
    simSetScriptAttribute(sim_handle_self,sim_childscriptattribute_automaticcascadingcalls,false) 
    baseHandle=simGetObjectHandle('RobbieBase')

    movementCyclePos=0

    

    movementHorizontalSpan=0.046

    movementHorizontalShift=0.003

    movementVerticalSpan=0.026

    movementPhase=1.25

    movementVelocity=6

end 


if (sim_call_type==sim_childscriptcall_cleanup) then 
 
end 


if (sim_call_type==sim_childscriptcall_sensing) then 
    simHandleChildScripts(sim_call_type) 
end 


if (sim_call_type==sim_childscriptcall_actuation) then 
    if (simGetSimulationTime()>0.25) then

    movementCyclePos=movementCyclePos+simGetSimulationTimeStep()*movementVelocity

    if (movementCyclePos>=5) then

        movementCyclePos=movementCyclePos-5

    end

    end

    simHandleChildScripts(sim_call_type,baseHandle,movementCyclePos,movementHorizontalSpan,movementHorizontalShift,movementVerticalSpan,movementPhase,0)--20*math.pi*math.sin(simGetSimulationTime()/5)/180)
end 
