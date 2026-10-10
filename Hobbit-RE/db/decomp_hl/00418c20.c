
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00418c20(int param_1,float param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_c;
  float fStack_4;
  
  if (*(int *)(param_1 + 0xf0) != 0) {
    piVar4 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0xe0),*(undefined4 *)(param_1 + 0xe4));
    piVar5 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xec));
    if (*(int *)(param_1 + 0x19c) == 0) {
      param_2 = *(float *)(param_1 + 0x198) - param_2;
      *(float *)(param_1 + 0x198) = param_2;
      if (param_2 < DAT_006e92e4 != (param_2 == DAT_006e92e4)) {
        *(undefined4 *)(param_1 + 0xf0) = 0;
        FUN_004188b0();
        (**(code **)(*piVar4 + 0x14))(param_1 + 0xd4,0);
        (**(code **)(*piVar5 + 0x14))(param_1 + 200,0);
        *(undefined4 *)(param_1 + 0x198) = 0;
        FUN_00659600(s_BilboSplashWater_0071fe04,1);
      }
    }
    else {
      param_2 = param_2 + *(float *)(param_1 + 0x198);
      *(float *)(param_1 + 0x198) = param_2;
      if (_DAT_0071fae4 < param_2) {
        *(undefined4 *)(param_1 + 0x19c) = 0;
        (**(code **)(*piVar4 + 0x14))(param_1 + 0xd4,0);
        (**(code **)(*piVar5 + 0x14))(param_1 + 200,0);
        *(undefined1 *)(piVar4 + 0x20) = 0xff;
        *(undefined1 *)(piVar5 + 0x20) = 0xff;
        FUN_004acc10(0x80);
        FUN_004acc10(0x80);
        (**(code **)(*piVar4 + 0x9c))(1);
        (**(code **)(*piVar5 + 0x9c))(1);
      }
    }
    uVar3 = __ftol();
    (**(code **)(*piVar4 + 0x9c))(1);
    (**(code **)(*piVar5 + 0x9c))(1);
    *(undefined1 *)(piVar4 + 0x20) = uVar3;
    *(undefined1 *)(piVar5 + 0x20) = uVar3;
    FUN_004acc10(0x78);
    FUN_004acc10(0x78);
    puVar6 = (undefined4 *)(**(code **)(*piVar4 + 0x28))();
    uVar1 = *puVar6;
    uVar2 = puVar6[2];
    puVar6 = (undefined4 *)(**(code **)(*piVar5 + 0x28))();
    uStack_14 = *puVar6;
    uStack_c = puVar6[2];
    fStack_1c = *(float *)(param_1 + 0xcc) - fStack_4;
    uStack_20 = uVar1;
    uStack_18 = uVar2;
    (**(code **)(*piVar4 + 0x14))(&uStack_20,0);
    uStack_20 = uStack_14;
    (**(code **)(*piVar5 + 0x14))(&stack0xffffffd8,0);
    return 0;
  }
  return 1;
}

