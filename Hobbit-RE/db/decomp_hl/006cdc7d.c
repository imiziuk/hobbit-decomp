
/* Library Function - Single Match
    _GodotFailGetProcAddress@8
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release,
   Visual Studio 2015 Release */

undefined4 _GodotFailGetProcAddress_8(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  HMODULE pHVar2;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar3;
  
  if (0xffff < param_2) {
    uVar1 = _GetProcAddressInternal_8();
    return uVar1;
  }
  pcVar3 = "GetProcAddress";
  pHVar2 = GetModuleHandleA("kernel32.dll");
  UNRECOVERED_JUMPTABLE = (code *)_GetProcAddressInternal_8(pHVar2,pcVar3);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006cdcaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  SetLastError(0x7f);
  return 0;
}

