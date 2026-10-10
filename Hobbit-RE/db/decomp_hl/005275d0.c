
void __fastcall FUN_005275d0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar6 = 0;
  *(undefined4 *)(param_1 + 0x2e4) = 0;
  *(undefined4 *)(param_1 + 0x2e8) = 0xb4;
  *(undefined4 *)(param_1 + 0x2ec) = 0;
  *(undefined4 *)(param_1 + 0x2dc) = 0;
  uVar1 = FUN_00647b10(2,4);
  *(undefined4 *)(param_1 + 0x2e0) = uVar1;
  uVar1 = FUN_00647b10(0,7);
  *(undefined4 *)(param_1 + 0x2f0) = uVar1;
  if (*(int *)(param_1 + 0xc) == 0) {
    *(undefined4 *)(param_1 + 0x18) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  FUN_004fa730(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),0x6a,0x92,0xffffffff);
  FUN_004fa800(&DAT_00763880);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  iVar5 = param_1 + 0x74;
  do {
    uVar7 = 0xffffffff;
    uVar1 = __ftol(0xffffffff);
    uVar2 = __ftol(uVar1);
    iVar3 = __ftol(uVar2);
    iVar3 = iVar3 + *(int *)(param_1 + 8);
    iVar4 = __ftol(iVar3);
    FUN_004fa730(iVar4 + *(int *)(param_1 + 4),iVar3,uVar2,uVar1,uVar7);
    if (*(int *)(&DAT_00735b40 + (iVar6 + *(int *)(param_1 + 0x2f0) * 6) * 4) != 0) {
      FUN_004fa800(&DAT_007637e0 +
                   *(int *)(&DAT_00735b40 + (iVar6 + *(int *)(param_1 + 0x2f0) * 6) * 4) * 0x20);
    }
    *(undefined4 *)(iVar5 + 0x40) = 0;
    iVar6 = iVar6 + 1;
    iVar5 = iVar5 + 0x58;
  } while (iVar6 < 6);
  uVar7 = 0xffffffff;
  uVar1 = __ftol(0xffffffff);
  uVar2 = __ftol(uVar1);
  iVar6 = __ftol(uVar2);
  iVar6 = iVar6 + *(int *)(param_1 + 8);
  iVar5 = __ftol(iVar6);
  FUN_004fa730(iVar5 + *(int *)(param_1 + 4),iVar6,uVar2,uVar1,uVar7);
  FUN_004fa800(&DAT_007638a0);
  *(undefined4 *)(param_1 + 0x2c4) = *(undefined4 *)(param_1 + 0x2e0);
  return;
}

