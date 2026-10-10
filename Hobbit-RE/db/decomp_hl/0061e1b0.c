
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0061e1b0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  float *pfVar4;
  float *pfVar5;
  undefined8 uVar6;
  
  piVar1 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x28))();
    uVar6 = FUN_005af480(*puVar2,puVar2[1],puVar2[2]);
    piVar1 = (int *)FUN_004021c0(uVar6);
    if (piVar1 != (int *)0x0) {
      piVar3 = (int *)FUN_005af120();
      pfVar4 = (float *)(**(code **)(*piVar3 + 0x28))();
      pfVar5 = (float *)(**(code **)(*piVar1 + 0x28))();
      *(float *)(param_1 + 0x5c) =
           SQRT((*pfVar5 - *pfVar4) * (*pfVar5 - *pfVar4) +
                (pfVar5[1] - pfVar4[1]) * (pfVar5[1] - pfVar4[1]) +
                (pfVar5[2] - pfVar4[2]) * (pfVar5[2] - pfVar4[2])) / _DAT_006f5d94;
      *param_2 = 6;
      *(undefined4 *)(param_1 + 0x58) = 0;
      FUN_005af3a0();
      FUN_005af3e0(uVar6);
      return 1;
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
  }
  return 0;
}

