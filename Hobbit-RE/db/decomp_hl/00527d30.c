
void __fastcall FUN_00527d30(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = 0;
  *(undefined4 *)(param_1 + 0x550) = 0;
  *(undefined4 *)(param_1 + 0x554) = 0;
  *(undefined4 *)(param_1 + 0x558) = 0;
  uVar1 = FUN_00647b10(8,10);
  *(undefined4 *)(param_1 + 0x54c) = uVar1;
  uVar1 = FUN_00647b10(0,7);
  *(undefined4 *)(param_1 + 0x55c) = uVar1;
  if (*(int *)(param_1 + 0xc) == 0) {
    *(undefined4 *)(param_1 + 0x18) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  FUN_004fa730(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),0x6a,0x8a,0xffffffff);
  FUN_004fa800(&DAT_00763a40);
  *(undefined4 *)(param_1 + 100) = 0;
  uVar6 = 0xffffffff;
  uVar1 = __ftol(0xffffffff);
  uVar2 = __ftol(uVar1);
  iVar3 = __ftol(uVar2);
  iVar3 = iVar3 + *(int *)(param_1 + 8);
  iVar4 = __ftol(iVar3);
  FUN_004fa730(iVar4 + *(int *)(param_1 + 4),iVar3,uVar2,uVar1,uVar6);
  FUN_004fa800(&DAT_00763a60);
  *(undefined4 *)(param_1 + 0xd0) = 1;
  uVar1 = FUN_00647b10(0x80,0x167);
  *(undefined4 *)(param_1 + 0x554) = uVar1;
  FUN_004fa810(uVar1);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x54c);
  uVar6 = 0xffffffff;
  uVar2 = 0x3a;
  uVar1 = 0x3a;
  iVar3 = __ftol(0x3a,0x3a,0xffffffff);
  iVar3 = iVar3 + *(int *)(param_1 + 8);
  iVar4 = __ftol(iVar3);
  FUN_004fa730(iVar4 + *(int *)(param_1 + 4),iVar3,uVar1,uVar2,uVar6);
  FUN_004fa800(&DAT_00763a80);
  *(undefined4 *)(param_1 + 0x534) = 0;
  iVar3 = param_1 + 0xd4;
  do {
    FUN_004fa730(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),0x10,0x10,0xffffffff);
    if (*(int *)(&DAT_00735c20 + (iVar5 + *(int *)(param_1 + 0x55c) * 6) * 4) != 0) {
      FUN_004fa800(&DAT_007637e0 +
                   *(int *)(&DAT_00735c20 + (iVar5 + *(int *)(param_1 + 0x55c) * 6) * 4) * 0x20);
    }
    *(undefined4 *)(iVar3 + 0x40) = 0;
    iVar5 = iVar5 + 1;
    iVar3 = iVar3 + 0x58;
  } while (iVar5 < 6);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}

