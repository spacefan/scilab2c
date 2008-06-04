function opout = FA_ADD(in1,in2)
// function opout = FA_ADD(in1,in2)
// -----------------------------------------------------------------
//
// Status:
// 26-Oct-2007 -- Raffaele Nutricato: Author.
// 26-Oct-2007 -- Alberto Morea: Test Ok.
//
// Copyright 2007 Raffaele Nutricato & Alberto Morea.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),2,2);


if (SCI2Cisnum(in1) & SCI2Cisnum(in2))
   in1num = eval(in1);
   in2num = eval(in2);
   outnum = in1num+in2num;
   if isnan(outnum)
      opout  = '__SCI2CNANSIZE';
   else
      opout  = string(outnum);
   end
else
   opout  = string(in1+'+'+in2);
end   

endfunction
