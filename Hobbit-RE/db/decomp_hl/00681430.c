
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00681430(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((DAT_008091a8 & 1) == 0) {
    DAT_008091a8 = DAT_008091a8 | 1;
    _DAT_008091ac = FUN_00682060;
    _DAT_008091b0 = &LAB_006821a0;
    _DAT_008091b4 = &LAB_00681d60;
    _DAT_008091b8 = &LAB_00681ea0;
  }
  iVar2 = FUN_00681b00(param_2);
  if (iVar2 == 0) {
    return 0;
  }
  puVar3 = param_1;
  for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[5] = param_3;
  uVar1 = *(undefined4 *)
           (&DAT_008091a8 + ((uint)*(ushort *)((int)param_1 + 2) + (uint)(param_3 != 0) * 2) * 4);
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[8] = uVar1;
  return 1;
}

