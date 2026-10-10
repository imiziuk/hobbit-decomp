
void __fastcall FUN_005ba910(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0x78) != 0) {
    if (*(int *)(param_1 + 0x88) == 0 && *(int *)(param_1 + 0x8c) == 0) {
      uVar5 = FUN_0054bad0(0x2f,0,0);
      *(undefined8 *)(param_1 + 0x88) = uVar5;
      iVar1 = FUN_004021c0(uVar5);
      if (iVar1 != 0) {
        local_24 = 0xbfa147ae;
        local_20 = 0x428ef5c3;
        local_1c = 0x40d428f6;
        local_18 = 0x43480000;
        local_14 = 0x42c80000;
        local_10 = 0x42c80000;
        local_c = 0;
        local_8 = 0;
        local_4 = 0;
        FUN_004e2000(&local_c,&local_18,&local_24);
      }
    }
    if (*(int *)(param_1 + 0x94) == 0) {
      *(undefined4 *)(param_1 + 0x94) = 1;
    }
    piVar2 = (int *)FUN_005af120();
    uVar3 = (**(code **)(*piVar2 + 0x154))();
    FUN_00549470(uVar3);
    FUN_00549580(uVar3);
    iVar1 = FUN_0053cb40(s_BoneTail12_0074591c,0);
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    if (iVar1 != -1) {
      FUN_005af120();
      iVar4 = FUN_00592190();
      if (*(int *)(iVar4 + 0x13c) != 0) {
        FUN_005423d0();
      }
      uStack_30 = *(undefined4 *)(*(int *)(iVar4 + 0x140) + iVar1 * 0xc);
      iVar1 = *(int *)(iVar4 + 0x140) + iVar1 * 0xc;
      uStack_2c = *(undefined4 *)(iVar1 + 4);
      uStack_28 = *(undefined4 *)(iVar1 + 8);
    }
    piVar2 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c));
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x14))(&uStack_30,0);
    }
  }
  return;
}

