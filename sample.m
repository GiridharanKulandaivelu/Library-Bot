display('WELCOME TO MODERN LIBRARY');
display('TEXT IS CASE SENSITIVE');
uname=input('Enter the username: ','s');
pass=input('Enter the password: ','s');
display('1: ISSUE    2:RETURN');
i=input('ENTER YOUR CHOICE:');
if(isequal(i,1))
for n=1:3;
    check=isequal(B{n,2},uname)&isequal(B{n,3},pass);
    if (check)
        bname = input('Enter the book name: ','s');
        aname = input('Enter the Author name: ','s');
       
        for m=1:9;
            a=isequal(A{m,2},bname)&isequal(A{m,3},aname);
            b=isequal(A{m,8},'na');
         if(a)
            if(b)
               display('book already issued');
               break;
            else
            if(isequal(B{n,4},'null')||isequal(B{n,5},'null'))    
             reply=input('Do you want book ? y/n [Y]: ', 's');
             if (isequal(reply,'y'))
             rlocation=A(m,6);
             clocation=A(m,7);
             orfid=A(m,5);
             A{m,8}='na';
             orfid;
              if(isequal(B{n,4},'null'))
                 B{n,4}=bname;
              elseif(isequal(B{n,5},'null'))
                 B{n,5}=bname;
              end 
             break;
             elseif(isequal(reply,'n'))
                
                 break;
             else
                    display('enter the correct choice');
                    break;
             end
            else
                display('your account is full');
                break;
            end
            end
        
           
        end
        
        end
        
    if(a==0)
           display('book name and auhor name doesnot match');
        end    
    end
    
end

%elseif(isequal(i,2))
%u=serial('COM4','baudrate',9600);
%fopen2(s2);
%fprintf(s,'%s','p');

end
%new code

s=serial('COM3','baudrate',9600);
t=serial('COM3','baudrate',9600);
fopen(s);
fopen(t);      
if(isequal(A{m,9},'L'))          %to find left stack or right stack
{
    fprintf(s,'%s','l');

}
else
{
    fprintf(s,'%s','r');
};
end

for x=1:rlocation{1};  
%str=class(e);
%display(str);

    
    fprintf(s,'%s','a');
    mywait(5);
    display(x);
    end


for y=1:clocation{1};    
fprintf(s,'%s','b');
display(y);
end
while(1)
go=fscanf(s,'%s');
if(go=='y')
    char r;
           r=fscanf(t,'%s');% read rfid tag of book
        if((isequal(A{m,5},r)==1))
        
            fprintf(s,'%s','s');
            break;
         
        else
            
                fprintf(s,'%s','g');
                
        end

    end

end

        
fclose(s);
fclose(t);