
void __thiscall FUN_00611b30(int param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  float fStack_58;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006e41c0;
  pvStack_c = ExceptionList;
  iVar4 = *(int *)(param_1 + 8);
  uVar6 = *(undefined4 *)(param_1 + 0xb4);
  ExceptionList = &pvStack_c;
  *(float *)(param_1 + 0xd0) = *(float *)(param_1 + 0xd0) - param_2;
  *(undefined4 *)(iVar4 + 0x180) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(iVar4 + 0x184) = uVar6;
  iVar4 = *(int *)(param_1 + 0xd4);
  uVar2 = 4 - iVar4;
  if (4 < (int)uVar2) {
    uVar2 = 4;
  }
  fStack_58 = 0.0;
  uVar2 = ((int)uVar2 < 0) - 1 & uVar2;
  switch(*(undefined2 *)(param_1 + 0x42)) {
  case 5:
    if (((*(float *)(param_1 + 0xd0) < DAT_006e92e4 == (*(float *)(param_1 + 0xd0) == DAT_006e92e4))
        && (*(int *)(param_1 + 200) == 0)) && (iVar4 = FUN_0052a620(), iVar4 != 0)) {
      *(undefined4 *)(param_1 + 0xcc) = 5;
    }
    break;
  case 6:
    break;
  case 7:
    break;
  case 8:
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) {
      if (iVar4 == 4) {
        fStack_58 = *(float *)(param_1 + 0xb8 + uVar2 * 4);
      }
      else {
        iVar4 = FUN_0052a620();
        if (iVar4 == 0) {
          fStack_58 = *(float *)(param_1 + 0xb8 + uVar2 * 4);
        }
        else {
          *(undefined4 *)(param_1 + 0xcc) = 9;
          fStack_58 = *(float *)(param_1 + 0xb8 + uVar2 * 4);
        }
      }
    }
    break;
  case 9:
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) {
      if (iVar4 == 3) {
        fStack_58 = *(float *)(param_1 + 0xb8 + uVar2 * 4);
      }
      else {
        iVar4 = FUN_0052a620();
        if (iVar4 == 0) {
          fStack_58 = *(float *)(param_1 + 0xb8 + uVar2 * 4);
        }
        else {
          *(undefined4 *)(param_1 + 0xcc) = 10;
          fStack_58 = *(float *)(param_1 + 0xb8 + uVar2 * 4);
        }
      }
    }
    break;
  case 10:
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) {
      if (iVar4 == 2) {
        fStack_58 = *(float *)(param_1 + 0xb8 + uVar2 * 4);
      }
      else {
        iVar4 = FUN_0052a620();
        if (iVar4 == 0) {
          fStack_58 = *(float *)(param_1 + 0xb8 + uVar2 * 4);
        }
        else {
          *(undefined4 *)(param_1 + 0xcc) = 0xb;
          fStack_58 = *(float *)(param_1 + 0xb8 + uVar2 * 4);
        }
      }
    }
    break;
  case 0xb:
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) {
      fStack_58 = *(float *)(param_1 + 0xb8 + uVar2 * 4);
    }
    break;
  case 0xc:
    break;
  case 0xd:
  }
  uVar2 = *(uint *)(param_1 + 0xb0);
  uVar1 = *(uint *)(param_1 + 0xb4);
  FUN_00649600();
  iVar3 = (int)*(short *)(&DAT_0076cd88 + ((uVar2 ^ uVar1) * -0xfb & 0xfff) * 2);
  for (iVar4 = iVar3; iVar4 != -1; iVar4 = (int)*(short *)(DAT_0076f648 + iVar4 * 0x14 + 0xe)) {
  }
  do {
    if (iVar3 == -1) {
LAB_00611e78:
      uStack_4 = 0xffffffff;
      FUN_00649720();
LAB_00611f74:
      FUN_005be370();
      ExceptionList = pvStack_c;
      return;
    }
    piVar5 = (int *)(DAT_0076f648 + iVar3 * 0x14);
    iVar4 = *piVar5;
    if (((iVar4 != 0) && (*(uint *)(iVar4 + 8) == uVar2)) && (*(uint *)(iVar4 + 0xc) == uVar1)) {
      if (iVar3 != -1) {
        uVar2 = *(uint *)(DAT_0076f648 + iVar3 * 0x14);
        uVar2 = -(uint)((*(byte *)(uVar2 + 0x7f) & 0x10) != 0) & uVar2;
        uStack_4 = 0xffffffff;
        FUN_00649720();
        if ((uVar2 != 0) && (DAT_006e92e4 < fStack_58)) {
          iVar3 = FUN_005af120();
          iVar4 = *(int *)(uVar2 + 0x300);
          uVar6 = *(undefined4 *)(iVar3 + 0xc);
          *(undefined4 *)(iVar4 + 0x180) = *(undefined4 *)(iVar3 + 8);
          *(undefined4 *)(iVar4 + 0x184) = uVar6;
          piVar5 = (int *)FUN_005af120();
          if (piVar5 != (int *)0x0) {
            uVar6 = (**(code **)(*piVar5 + 0x28))();
            FUN_004357e0(uVar6);
            uVar7 = FUN_00425510();
            FUN_005b8970(uVar7);
            uStack_4 = 1;
            if ((*(byte *)(uVar2 + 0xe8) & 1) == 0) {
              FUN_005af120();
              FUN_004a5130();
            }
            uStack_4 = 0xffffffff;
            FUN_005b8a20();
          }
        }
        goto LAB_00611f74;
      }
      goto LAB_00611e78;
    }
    iVar3 = (int)*(short *)((int)piVar5 + 0xe);
  } while( true );
}

