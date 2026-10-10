
void __fastcall FUN_00493b80(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  float10 fVar5;
  
  iVar4 = FUN_00494690();
  if (iVar4 != 0) {
    fVar5 = (float10)FUN_00647b30(0,0x447a0000);
    *(float *)(param_1 + 0x104) = (float)fVar5;
    *(undefined4 *)(param_1 + 0xd8) = 0;
    fVar5 = (float10)FUN_00647b30(0,*(undefined4 *)(param_1 + 0xe4));
    *(float *)(param_1 + 0xdc) = (float)fVar5;
    FUN_00647b30(0,0x3f800000);
    uVar1 = __ftol();
    uVar2 = __ftol();
    uVar3 = __ftol();
    *(undefined1 *)(param_1 + 0xd0) = uVar1;
    *(undefined1 *)(param_1 + 0xd3) = *(undefined1 *)(param_1 + 0xcf);
    *(undefined1 *)(param_1 + 0xd2) = uVar3;
    *(undefined1 *)(param_1 + 0xd1) = uVar2;
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0xe4);
  }
  *(byte *)(param_1 + 0x7b) = *(byte *)(param_1 + 0x7b) & 0xf7;
  return;
}

