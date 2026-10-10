
void __fastcall FUN_00528b60(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  undefined4 uVar8;
  
  iVar6 = 0;
  *(undefined4 *)(param_1 + 0x8d8) = 0;
  *(undefined4 *)(param_1 + 0x8dc) = 0;
  *(undefined4 *)(param_1 + 0x8e0) = 0;
  *(undefined4 *)(param_1 + 0x8e4) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  uVar1 = FUN_00647b10(0,5);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  fVar7 = (float10)FUN_00647b30(0x3ecccccd,0x3ee66666);
  *(float *)(param_1 + 0x8d4) = (float)fVar7;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  if (*(int *)(param_1 + 0xc) == 0) {
    *(undefined4 *)(param_1 + 0x18) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  uVar8 = 0xffffffff;
  uVar1 = __ftol(0xffffffff);
  uVar2 = __ftol(uVar1);
  FUN_004fa730(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),uVar2,uVar1,uVar8);
  FUN_004fa800(&DAT_00763c80);
  *(undefined4 *)(param_1 + 0x7c) = 0;
  iVar5 = param_1 + 0x4b4;
  do {
    uVar8 = 0xffffffff;
    uVar1 = __ftol(0xffffffff);
    uVar2 = __ftol(uVar1);
    iVar3 = __ftol(uVar2);
    iVar3 = iVar3 + *(int *)(param_1 + 8);
    iVar4 = __ftol(iVar3);
    FUN_004fa730(iVar4 + *(int *)(param_1 + 4),iVar3,uVar2,uVar1,uVar8);
    FUN_004fa800(&DAT_00763d20);
    *(undefined4 *)(iVar5 + 0x40) = 0;
    uVar8 = 0xffffffff;
    uVar1 = __ftol(0xffffffff);
    uVar2 = __ftol(uVar1);
    iVar3 = __ftol(uVar2);
    iVar3 = iVar3 + *(int *)(param_1 + 8);
    iVar4 = __ftol(iVar3);
    FUN_004fa730(iVar4 + *(int *)(param_1 + 4),iVar3,uVar2,uVar1,uVar8);
    FUN_004fa800(&DAT_00763cc0);
    *(undefined4 *)(iVar5 + 0x250) = 0;
    iVar6 = iVar6 + 8;
    iVar5 = iVar5 + 0x58;
  } while (iVar6 < 0x30);
  iVar6 = param_1 + 0x94;
  iVar5 = 0;
  do {
    uVar8 = 0xffffffff;
    uVar1 = __ftol(0xffffffff);
    uVar2 = __ftol(uVar1);
    iVar3 = __ftol(uVar2);
    iVar3 = iVar3 + *(int *)(param_1 + 8);
    iVar4 = __ftol(iVar3);
    FUN_004fa730(iVar4 + *(int *)(param_1 + 4),iVar3,uVar2,uVar1,uVar8);
    FUN_004fa800(&DAT_00763ce0);
    *(undefined4 *)(iVar6 + 0x40) = 0;
    uVar8 = 0xffffffff;
    uVar1 = __ftol(0xffffffff);
    uVar2 = __ftol(uVar1);
    iVar3 = __ftol(uVar2);
    iVar3 = iVar3 + *(int *)(param_1 + 8);
    iVar4 = __ftol(iVar3);
    FUN_004fa730(iVar4 + *(int *)(param_1 + 4),iVar3,uVar2,uVar1,uVar8);
    FUN_004fa800(&DAT_00763ca0);
    *(undefined4 *)(iVar6 + 0x250) = 0;
    iVar5 = iVar5 + 8;
    iVar6 = iVar6 + 0x58;
  } while (iVar5 < 0x30);
  uVar1 = FUN_00647b10(0,5);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  FUN_004fa800(&DAT_00763d00);
  if (*(int *)(param_1 + 0x10) == 8) {
    iVar6 = FUN_00647b10(0,5);
    *(int *)(param_1 + 0x2c) = iVar6;
    if (iVar6 == *(int *)(param_1 + 0x28)) {
      do {
        iVar6 = FUN_00647b10(0,5);
        *(int *)(param_1 + 0x2c) = iVar6;
      } while (iVar6 == *(int *)(param_1 + 0x28));
    }
    FUN_004fa800(&DAT_00763d40);
  }
  return;
}

