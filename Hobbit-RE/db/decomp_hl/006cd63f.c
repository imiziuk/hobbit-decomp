
/* Library Function - Single Match
    _strcmpiC@8
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release,
   Visual Studio 2015 Release
   __stdcall strcmpiC,8 */

bool strcmpiC(PCNZCH param_1,PCNZCH param_2)

{
  int iVar1;
  
  iVar1 = CompareStringA(0x409,1,param_1,-1,param_2,-1);
  return iVar1 == 2;
}

