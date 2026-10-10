
int FUN_006caec1(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_00815f74 = 1;
                    /* WARNING: Could not recover jumptable at 0x006caedb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_00815f74 = 1;
                    /* WARNING: Could not recover jumptable at 0x006caef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_00815f44;
  }
  DAT_00815f74 = (uint)bVar2;
  return param_1;
}

