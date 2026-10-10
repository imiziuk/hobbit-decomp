
void __fastcall FUN_00526d40(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  float10 fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  *(undefined4 *)(param_1 + 0x2ec) = 0;
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  *(undefined4 *)(param_1 + 0x2f0) = 0x3f000000;
  uVar3 = FUN_00647b10(0,5);
  *(undefined4 *)(param_1 + 0x2f4) = uVar3;
  fVar7 = (float10)FUN_00647b30(0x3ecccccd,0x3ee66666);
  *(float *)(param_1 + 0x2e8) = (float)fVar7;
  *(undefined1 *)(param_1 + 0x2dd) = 0xff;
  *(undefined1 *)(param_1 + 0x2e4) = 0xff;
  *(undefined1 *)(param_1 + 0x2e5) = 0xff;
  *(undefined1 *)(param_1 + 0x2e6) = 0xff;
  *(undefined1 *)(param_1 + 0x2dc) = 0;
  if (*(int *)(param_1 + 0xc) == 0) {
    *(undefined4 *)(param_1 + 0x18) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  FUN_004fa730(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),0x6a,0x92,0xffffffff);
  FUN_004fa800(&DAT_00763d60);
  uVar9 = 0x1e;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  uVar8 = 0x1e;
  uVar10 = 0xffffffff;
  uVar3 = FUN_006a22a0(0,0x1e,0x1e,0xffffffff);
  uVar4 = FUN_006a2260(0,uVar3);
  FUN_004fa730(uVar4,uVar3,uVar8,uVar9,uVar10);
  FUN_004fa800(&DAT_00763de0);
  *(undefined4 *)(param_1 + 0x2c4) = 0;
  puVar6 = &DAT_007628b8;
  iVar5 = param_1 + 0x74;
  do {
    uVar10 = 0xffffffff;
    uVar9 = 0x1e;
    uVar8 = 0x1e;
    uVar3 = __ftol(0x1e,0x1e,0xffffffff);
    uVar4 = __ftol(uVar3);
    FUN_004fa730(uVar4,uVar3,uVar8,uVar9,uVar10);
    *(undefined4 *)(iVar5 + 0x40) = 0;
    FUN_004fa800(&DAT_00763da0);
    puVar6 = puVar6 + 2;
    iVar5 = iVar5 + 0x58;
  } while ((int)puVar6 < 0x7628e8);
  uVar1 = FUN_00647b10(0,5);
  *(undefined1 *)(param_1 + 0x2e4) = uVar1;
  FUN_004fa800(&DAT_00763d80);
  if (*(int *)(param_1 + 0x10) == 8) {
    cVar2 = FUN_00647b10(0,5);
    *(char *)(param_1 + 0x2e5) = cVar2;
    if (cVar2 == *(char *)(param_1 + 0x2e4)) {
      do {
        cVar2 = FUN_00647b10(0,5);
        *(char *)(param_1 + 0x2e5) = cVar2;
      } while (cVar2 == *(char *)(param_1 + 0x2e4));
    }
    FUN_004fa800(&DAT_00763dc0);
  }
  return;
}

