
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004cd880(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 uStack_c;
  float fStack_8;
  undefined4 uStack_4;
  
  if (param_2 != 0) {
    if ((DAT_0075dae0 != param_1[2]) || (DAT_0075dae4 != param_1[3])) {
      iVar1 = FUN_004021c0(DAT_0075dae0,DAT_0075dae4);
      if (iVar1 != 0) {
        FUN_004cd880(0);
      }
    }
    FUN_0054be30(param_1[0x62],param_1[99]);
    uVar4 = FUN_0054bad0(0x2d,0,0);
    *(undefined8 *)(param_1 + 0x62) = uVar4;
    piVar2 = (int *)FUN_004021c0(uVar4);
    if (piVar2 != (int *)0x0) {
      FUN_00488c30(s_Saveped_active_0072d4d8);
      puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x28))();
      uStack_4 = puVar3[2];
      fStack_8 = (float)puVar3[1] + _DAT_006e9364;
      uStack_c = *puVar3;
      (**(code **)(*piVar2 + 0x14))(&uStack_c,0);
      (**(code **)(*piVar2 + 0x110))();
    }
    DAT_0075dae0 = param_1[2];
    DAT_0075dae4 = param_1[3];
    return;
  }
  if ((DAT_0075dae0 == param_1[2]) && (DAT_0075dae4 == param_1[3])) {
    DAT_0075dae0 = 0;
    DAT_0075dae4 = 0;
  }
  FUN_0054be30(param_1[0x62],param_1[99]);
  uVar4 = FUN_0054bad0(0x2d,0,0);
  iVar1 = param_1[0x62];
  *(undefined8 *)(param_1 + 0x62) = uVar4;
  piVar2 = (int *)FUN_004021c0(iVar1,(int)((ulonglong)uVar4 >> 0x20));
  if (piVar2 != (int *)0x0) {
    FUN_00488c30(s_Saveped_inactive_0072d4c4);
    puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x28))();
    uStack_4 = puVar3[2];
    fStack_8 = (float)puVar3[1] + _DAT_006e9364;
    uStack_c = *puVar3;
    (**(code **)(*piVar2 + 0x14))(&uStack_c,0);
    (**(code **)(*piVar2 + 0x110))();
  }
  return;
}

