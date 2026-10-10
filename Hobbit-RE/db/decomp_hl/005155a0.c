
void __thiscall FUN_005155a0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined1 uStack_3c;
  undefined1 uStack_3b;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  undefined1 uStack_38;
  undefined1 uStack_37;
  undefined1 uStack_36;
  undefined1 uStack_35;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  iVar1 = param_2;
  if ((*(byte *)(param_1 + 0x2c) & 1) != 0) {
    iStack_1c = *(int *)(param_1 + 0x48) + param_3;
    iStack_20 = *(int *)(param_1 + 0x44) + param_2;
    iStack_18 = *(int *)(param_1 + 0x4c) + param_2;
    iStack_14 = *(int *)(param_1 + 0x50) + param_3;
    iStack_30 = iStack_20 + 1;
    iStack_2c = iStack_1c + 1;
    iStack_28 = iStack_18 + -1;
    iStack_24 = iStack_14 + -1;
    if ((*(byte *)(param_1 + 0x2c) & 4) != 0) {
      if (*(char *)(param_1 + 0x10f) != '\0') {
        iStack_10 = iStack_20 + 0xc;
        iStack_8 = iStack_18 + -0x10;
        iStack_c = iStack_1c + 0x11;
        uStack_3c = 0x21;
        uStack_3b = 0x30;
        uStack_3a = 0x50;
        iStack_4 = iStack_14 + -0x11;
        param_2 = 0xff32261e;
        uStack_39 = 0xff;
        uStack_35 = 0xff;
        uStack_36 = 0x32;
        uStack_37 = 0x26;
        uStack_38 = 0x1e;
        iStack_34 = -0xafcfdf;
        FUN_0069fd50(&iStack_10,&iStack_34,&uStack_38,&uStack_3c,&param_2,0);
      }
      param_2 = 0xffffffff;
      FUN_0069f570(1,&iStack_20,0,&param_2,0);
      iVar2 = FUN_006a22a0(0x28);
      param_2 = FUN_006a2260(0x280);
      iStack_34 = FUN_006a22a0(0x96);
      iStack_30 = FUN_006a2260(0);
      iStack_30 = iStack_30 + 2;
      uVar4 = *(undefined4 *)(param_1 + 0x54);
      iStack_28 = param_2 + 2;
      puVar8 = &param_2;
      uVar7 = 0x12;
      piVar6 = &iStack_30;
      iStack_2c = iStack_34 + -2;
      iStack_24 = iVar2 + -2;
      param_2 = 0xff000000;
      uVar3 = FUN_0069fa60(s_large_0071ceac);
      FUN_0069fb40(uVar3,piVar6,uVar7,puVar8,uVar4);
      iStack_30 = iStack_30 + -2;
      iStack_28 = iStack_28 + -2;
      iStack_2c = iStack_2c + -2;
      iStack_24 = iStack_24 + -2;
      uVar4 = *(undefined4 *)(param_1 + 0x54);
      puVar8 = &param_2;
      uVar7 = 0x12;
      piVar6 = &iStack_30;
      param_2 = 0xffffffff;
      uVar3 = FUN_0069fa60(s_large_0071ceac);
      FUN_0069fb40(uVar3,piVar6,uVar7,puVar8,uVar4);
    }
    iStack_1c = *(int *)(param_1 + 0x48) + param_3 + 0x3a;
    iStack_14 = *(int *)(param_1 + 0x50) + param_3 + -0x57;
    iVar2 = param_1 + 0x164;
    iStack_18 = *(int *)(param_1 + 0x4c) + iVar1 + -0x15;
    puVar8 = &param_2;
    uVar3 = 0x12;
    piVar6 = &iStack_20;
    iStack_20 = *(int *)(param_1 + 0x44) + iVar1 + 0x19;
    param_2 = 0xff000000;
    iVar5 = iVar2;
    uVar4 = FUN_0069fa60(s_large_0071ceac);
    FUN_0069fbc0(uVar4,piVar6,uVar3,puVar8,iVar5);
    iStack_20 = iStack_20 + -2;
    iStack_1c = iStack_1c + -2;
    iStack_18 = iStack_18 + -2;
    iStack_14 = iStack_14 + -2;
    iVar5 = param_1 + 0x1b0;
    uVar3 = 0x12;
    piVar6 = &iStack_20;
    uVar4 = FUN_0069fa60(s_large_0071ceac);
    FUN_0069fbc0(uVar4,piVar6,uVar3,iVar5,iVar2);
    iVar2 = param_3;
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 0x18)) {
      do {
        (**(code **)(**(int **)(*(int *)(param_1 + 0x1c) + iVar5 * 4) + 8))
                  (*(int *)(param_1 + 0x44) + iVar1,*(int *)(param_1 + 0x48) + iVar2);
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(param_1 + 0x18));
    }
  }
  return;
}

