%s,Arduino port obj
%t,RFID port obj
if (isequal(reply,'y'))
    msgbox('please wait until book is fetched');
             rlocation=A(m,6);
             clocation=A(m,7);
             orfid=A(m,5);
             A{m,8}='na';
             orfid;
             for x=1:(rlocation{1}+1);
                 fprintf(s,'%s','a');
                 display(x);
             end
             pause(5);
             for y=1:(clocation{1}+1);
                 fprintf(s,'%s','b');
                 display(y);
             end
             pause(5);
             %bot moves to specific row and column
 
             while(1)
                 i=fscanf(t,'%s');
                 if(isequal(i,orfid))
                     for m=1:2;
                        fprintf(s,'$s','c');%activates picking arm
                     end
                     break;
                 end
                 pause(0.5);%delay for the arm to move to next book
             end
             pause(2);
             fprintf(s,'%s','r');%all motor returns to initial position
             delete(s);
             delete(t);
end
%return
elseif(isequal(i,2))
    %s,arduino port obj
    %t,RFID port obj
    msgbox('place th book in correct place');
    rfid=fscanf(t,'%s');
    for m=1:9;
        if(isequal(A{m,5},rfid))
            rlocation=A{m,6};
            clocation=A{m,7};
            A{m,8}='a';
            break;
        end
    end%row ,column location fetched
    for n=1:2;
        B{
    
        