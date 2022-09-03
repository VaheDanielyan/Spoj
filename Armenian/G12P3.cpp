var a,b:longint;
function solve(n:longint):int64;
var i,ans:int64;
begin
     ans:=0;
     i:=1;
     while i*(i+2)<=n do
     begin
        inc(ans,n div i-i-1);
        inc(i)
     end;
     solve:=ans
end;
begin
     read(a,b);
     writeln(solve(b)-solve(a-1));
     close(input);
     close(output)
end.
