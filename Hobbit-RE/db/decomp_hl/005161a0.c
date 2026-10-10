
void __thiscall FUN_005161a0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_retaddr;
  int *piVar5;
  undefined4 uVar6;
  undefined1 uStack_24;
  undefined1 uStack_23;
  undefined1 uStack_22;
  undefined1 uStack_21;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  uStack_21 = 0x80;
  uStack_22 = 0;
  uStack_23 = 0;
  uStack_24 = 0;
  if ((*(byte *)(param_1 + 0x2c) & 1) != 0) {
    iVar1 = FUN_006a2260(DAT_00733f48);
    iVar2 = FUN_006a22a0(DAT_00733f4c);
    iVar3 = FUN_006a2260(DAT_00733f50);
    iStack_14 = FUN_006a22a0(DAT_00733f54);
    if (DAT_006e92e4 < *(float *)(param_1 + 0x1b4)) {
      if (0 < *(int *)(param_1 + 0x1c0)) {
        *(int *)(param_1 + 0x1c0) = *(int *)(param_1 + 0x1c0) - DAT_00733f40;
      }
      if (0 < *(int *)(param_1 + 0x1c4)) {
        *(int *)(param_1 + 0x1c4) = *(int *)(param_1 + 0x1c4) - DAT_00733f44;
      }
      if (*(int *)(param_1 + 0x1c0) < 0) {
        *(undefined4 *)(param_1 + 0x1c0) = 0;
      }
      if (*(int *)(param_1 + 0x1c4) < 0) {
        *(undefined4 *)(param_1 + 0x1c4) = 0;
      }
    }
    iStack_14 = iStack_14 - *(int *)(param_1 + 0x1c4);
    iStack_20 = iVar1 + *(int *)(param_1 + 0x1c0);
    iStack_18 = iVar3 - *(int *)(param_1 + 0x1c0);
    iStack_1c = *(int *)(param_1 + 0x1c4) + iVar2;
    *(undefined1 *)(param_1 + 0x1af) = 0xff;
    FUN_0069fd50(&iStack_20,&uStack_24,&uStack_24,&uStack_24,&uStack_24,0);
    if ((*(int *)(param_1 + 0x1c0) == 0) && (*(int *)(param_1 + 0x1c4) == 0)) {
      iStack_c = iStack_1c;
      iStack_10 = iStack_20 + 8;
      iStack_4 = iStack_14;
      iVar1 = param_1 + 0x160;
      iStack_8 = iStack_18 + -8;
      iVar2 = param_1 + 0x1ac;
      uVar6 = 0x12;
      piVar5 = &iStack_10;
      uVar4 = FUN_0069fa60(s_large_0071ceac);
      FUN_0069fbc0(uVar4,piVar5,uVar6,iVar2,iVar1);
    }
    iStack_10 = DAT_00733f58 + -0x15 + iStack_20;
    iStack_c = DAT_00733f5c + -0x15 + iStack_1c;
    iStack_8 = DAT_00733f60 + 0xe + iStack_18;
    iStack_4 = DAT_00733f64 + 0xe + iStack_14;
    (**(code **)(**(int **)(param_1 + 0x1bc) + 0xc))(&iStack_10);
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x18)) {
      do {
        (**(code **)(**(int **)(*(int *)(param_1 + 0x1c) + iVar1 * 4) + 8))
                  (*(int *)(param_1 + 0x44) + unaff_retaddr,*(int *)(param_1 + 0x48) + param_2);
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0x18));
    }
  }
  return;
}

