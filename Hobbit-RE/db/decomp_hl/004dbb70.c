
void FUN_004dbb70(undefined4 param_1)

{
  uint uVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  
  uVar3 = FUN_0054c5c0(5,s_C__projects_meridian_Support_Obj_0072e004,0x80);
  do {
    sVar2 = FUN_0054c7c0();
    if (sVar2 < 0) goto LAB_004dbbee;
    if (sVar2 == -1) {
      piVar6 = (int *)0x0;
    }
    else {
      uVar1 = *(uint *)(DAT_0076f648 + sVar2 * 0x14);
      if (uVar1 == 0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = (int *)(-(uint)((*(byte *)(uVar1 + 0x7f) & 0x10) != 0) & uVar1);
      }
    }
    uVar4 = (**(code **)(*piVar6 + 0x4c))(param_1);
    iVar5 = FUN_00647ed0(uVar4);
  } while (iVar5 != 0);
  FUN_0064e870(3,s_Trigger__Found__s_to_poof_0072e09c,param_1);
LAB_004dbbee:
  FUN_0054c880(uVar3);
  return;
}

