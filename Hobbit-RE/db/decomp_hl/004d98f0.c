
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004d98f0(int param_1)

{
  int iVar1;
  float10 fVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d5558;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_treeleaf_cluster__RenderCustom_0072dd54);
  local_4 = 0;
  iVar1 = 2;
  fVar2 = (float10)FUN_005a3420();
  if ((float10)_DAT_006ef410 < fVar2) {
    iVar1 = 1;
    fVar2 = (float10)FUN_005a3420();
    if ((float10)_DAT_006ef408 < fVar2) {
      iVar1 = 0;
    }
  }
  iVar1 = FUN_00549470(param_1 + 0xa8 + iVar1 * 4);
  if (iVar1 != 0) {
    FUN_004d99c0(iVar1,5);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

