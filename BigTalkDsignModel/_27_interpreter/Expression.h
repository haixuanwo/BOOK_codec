#ifndef FLYWEIGHT_H  
#define FLYWEIGHT_H  
  
#include <string>  
#include <iostream>  
#include <vector>  
#include <sstream>  
  
//Context���˴�Ϊ����������  
class PlayContext  
{  
private:  
    std::string text;  
public:  
    void SetText(std::string text)  
    {  
        this->text=text;  
    }  
    std::string GetText()  
    {  
        return this->text;  
    }  
};  
  
//AbstractExpression���˴�Ϊ���ʽ��  
class Expression  
{  
public:  
    void Interpret(PlayContext* context)  
    {  
        std::string s1=context->GetText();  
        std::string buf;  
        std::string s2;  
  
        if(context->GetText().length()==0)  
        {  
            return;  
        }  
        else  
        {  
            std::vector<std::string> vec;  
  
            std::stringstream ss(context->GetText());  
  
            while(ss >> buf)  
                vec.push_back(buf);  
  
            std::string playKey=vec[0];  
            std::string playValue=vec[1];  
            Excute(playKey,playValue);  
  
            vec.erase(vec.begin(),vec.begin()+2);  
            std::vector<std::string>::iterator it;  
            for(it=vec.begin();it!=vec.end();it++)  
            {  
                s2+=*it;  
                if(it!=vec.end()-1)  
                    s2+=" ";  
            }  
  
            context->SetText(s2);  
        }  
    }  
    virtual void Excute(std::string key,std::string value)=0;  
};  
  
//ConcreteExpression���˴�Ϊ������  
class Note:public Expression  
{  
public:  
    void Excute(std::string key,std::string value)  
    {  
        std::string note;  
        switch(key[0])  
        {  
        case 'C':  
            note="1";  
            break;  
        case 'D':  
            note="2";  
            break;  
        case 'E':  
            note="3";  
            break;  
        case 'F':  
            note="4";  
            break;  
        case 'G':  
            note="5";  
            break;  
        case 'A':  
            note="6";  
            break;  
        case 'B':  
            note="7";  
            break;  
        }  
        std::cout<<note<<" ";  
    }  
};  
  
//ConcreteExpression���˴�Ϊ������  
class Scale:public Expression  
{  
public:  
    void Excute(std::string key,std::string value)  
    {  
        std::string scale;  
        switch(value[0])  
        {  
        case '1':  
            scale="low key";  
            break;  
        case '2':  
            scale="middle key";  
            break;  
        case'3':  
            scale="high key";  
            break;  
        }  
        std::cout<<scale<<" ";  
    }  
};  
  
#endif  

