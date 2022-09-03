// Pascal
var
l,v,k,r,n,i:longint;
begin
read(n);
i:=trunc(sqrt(n));
k:=i*i;
r:=4+6*(i-1)+2*sqr(i-1);
if k<n then
begin
   for l:=1 to i do
   begin
        if l=1 then v:=3 else v:=2;
        r:=r+v;k:=k+1;
        if k=n then begin i:=-1; break; end;

   end;
   for l:=1 to i+1 do
   begin
        if l=1 then v:=3 else v:=2;
        r:=r+v;k:=k+1;
        if k=n then break;

   end;
end;
writeln(r);
end.
