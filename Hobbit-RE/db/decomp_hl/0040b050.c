
void __fastcall FUN_0040b050(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  undefined4 uVar6;
  
  if ((*(int *)(param_1 + 0x14) == 0) || (*(int *)(param_1 + 0xc) == 0)) {
    FUN_0040e590();
  }
  else {
    FUN_0040e4e0(0);
  }
  piVar1 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c));
  piVar2 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  iVar3 = FUN_0040afd0();
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 8);
    if ((iVar3 == 1) || (iVar3 == 3)) {
      FUN_004de6b0(0);
      FUN_004de6b0(1);
      (**(code **)(*piVar2 + 0xc))();
    }
    else {
      if (iVar3 != 0) goto LAB_0040b115;
      FUN_004de6b0(0);
      FUN_004de6b0(1);
      (**(code **)(*piVar1 + 0xc))();
    }
    FUN_004de610(0);
  }
  else {
    FUN_004de6b0(0);
    FUN_004de6b0(0);
  }
LAB_0040b115:
  iVar3 = FUN_0054c0f0(s_Forge_Fire_Huge_0071e064,1);
  iVar4 = FUN_0054c0f0(s_Forge_Fire_Small_0071e050,1);
  if (*(int *)(param_1 + 0x14) == 0) {
    FUN_004021c0(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
    FUN_004021c0(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
    FUN_004d22c0(1);
    FUN_004d22c0(0);
    if (iVar3 != 0) {
      uVar6 = 0;
LAB_0040b1e6:
      FUN_00459cf0(uVar6);
    }
LAB_0040b1ed:
    if (iVar4 != 0) {
      uVar6 = 0;
LAB_0040b1f7:
      FUN_00459cf0(uVar6);
    }
  }
  else {
    FUN_004021c0(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
    FUN_004021c0(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
    FUN_004d22c0(0);
    FUN_004d22c0(1);
    if (*(int *)(param_1 + 0xc) != 0) {
      if (iVar3 != 0) {
        uVar6 = 1;
        goto LAB_0040b1e6;
      }
      goto LAB_0040b1ed;
    }
    if (iVar3 != 0) {
      FUN_00459cf0(0);
    }
    if (iVar4 != 0) {
      uVar6 = 1;
      goto LAB_0040b1f7;
    }
  }
  iVar3 = FUN_004021c0(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
  if (iVar3 != 0) {
    FUN_004d0a70(*(undefined4 *)(param_1 + 0xc0),1);
    FUN_004d0a70(*(undefined4 *)(param_1 + 0xc4),1);
    FUN_004d0a70(*(undefined4 *)(param_1 + 200),1);
    FUN_004d0a70(*(undefined4 *)(param_1 + 0xcc),1);
    FUN_004d0a70(*(undefined4 *)(param_1 + 0xd0),1);
    FUN_004d0a70(*(undefined4 *)(param_1 + 0xd4),1);
    FUN_004d0a70(*(undefined4 *)(param_1 + 0xd8),1);
    FUN_004d0a70(*(undefined4 *)(param_1 + 0xdc),1);
    FUN_004d0a70(*(undefined4 *)(param_1 + 0xe0),1);
    iVar3 = *(int *)(param_1 + 4);
    if (iVar3 == 1) {
      iVar3 = *(int *)(param_1 + 8);
      if (iVar3 == 1) {
        uVar6 = *(undefined4 *)(param_1 + 0xd4);
      }
      else if (iVar3 == 3) {
        uVar6 = *(undefined4 *)(param_1 + 0xd0);
      }
      else {
        if (iVar3 != 2) goto LAB_0040b357;
        uVar6 = *(undefined4 *)(param_1 + 0xcc);
      }
    }
    else if (iVar3 == 2) {
      iVar3 = *(int *)(param_1 + 8);
      if (iVar3 == 1) {
        uVar6 = *(undefined4 *)(param_1 + 200);
      }
      else if (iVar3 == 3) {
        uVar6 = *(undefined4 *)(param_1 + 0xc4);
      }
      else {
        if (iVar3 != 2) goto LAB_0040b357;
        uVar6 = *(undefined4 *)(param_1 + 0xc0);
      }
    }
    else {
      if (iVar3 != 3) goto LAB_0040b357;
      iVar3 = *(int *)(param_1 + 8);
      if (iVar3 == 1) {
        uVar6 = *(undefined4 *)(param_1 + 0xe0);
      }
      else if (iVar3 == 3) {
        uVar6 = *(undefined4 *)(param_1 + 0xdc);
      }
      else {
        if (iVar3 != 2) goto LAB_0040b357;
        uVar6 = *(undefined4 *)(param_1 + 0xd8);
      }
    }
    FUN_004d0a70(uVar6,0);
  }
LAB_0040b357:
  iVar3 = FUN_00406bf0(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c));
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0x300) != 0)) {
    fVar5 = (float10)FUN_00434ca0(0x91);
    iVar3 = *(int *)(iVar3 + 0x300);
    if ((NAN(fVar5) || NAN((float10)DAT_006e92e4)) == (fVar5 == (float10)DAT_006e92e4)) {
      *(undefined4 *)(iVar3 + 0x168) = *(undefined4 *)(param_1 + 0xb8);
      *(undefined4 *)(iVar3 + 0x16c) = *(undefined4 *)(param_1 + 0xbc);
      return;
    }
    if (*(int *)(param_1 + 0x14) == 0) {
      if (*(int *)(param_1 + 0xc) != 0) {
        *(undefined4 *)(iVar3 + 0x168) = *(undefined4 *)(param_1 + 0xa0);
        *(undefined4 *)(iVar3 + 0x16c) = *(undefined4 *)(param_1 + 0xa4);
        return;
      }
      *(undefined4 *)(iVar3 + 0x168) = *(undefined4 *)(param_1 + 0x90);
      *(undefined4 *)(iVar3 + 0x16c) = *(undefined4 *)(param_1 + 0x94);
      return;
    }
    if (*(int *)(param_1 + 0xc) == 0) {
      *(undefined4 *)(iVar3 + 0x168) = *(undefined4 *)(param_1 + 0x98);
      *(undefined4 *)(iVar3 + 0x16c) = *(undefined4 *)(param_1 + 0x9c);
      return;
    }
    if (*(int *)(param_1 + 0x10) == 0) {
      *(undefined4 *)(iVar3 + 0x168) = *(undefined4 *)(param_1 + 0xa8);
      *(undefined4 *)(iVar3 + 0x16c) = *(undefined4 *)(param_1 + 0xac);
      return;
    }
    *(undefined4 *)(iVar3 + 0x168) = *(undefined4 *)(param_1 + 0xb0);
    *(undefined4 *)(iVar3 + 0x16c) = *(undefined4 *)(param_1 + 0xb4);
  }
  return;
}

