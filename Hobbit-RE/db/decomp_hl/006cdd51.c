
/* Library Function - Multiple Matches With Different Base Names
    _GodotFailEnableWindow@8
    _GodotFailGetCPInfo@8
    _GodotFailGetPropA@8
    _GodotFailGetWindowLongA@8
     7 names - too many to list
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release,
   Visual Studio 2015 Release */

undefined4 FID_conflict__GodotFaillstrcatW_8(void)

{
  HMODULE pHVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = "GetWindowLongA";
  pHVar1 = GetModuleHandleA("user32.dll");
  UNRECOVERED_JUMPTABLE = (code *)_GetProcAddressInternal_8(pHVar1,pcVar3);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006cdd6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)();
    return uVar2;
  }
  SetLastError(0x7f);
  return 0;
}

