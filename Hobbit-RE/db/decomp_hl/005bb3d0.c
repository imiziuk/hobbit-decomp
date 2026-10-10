
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_005bb3d0(int param_1,int *param_2,undefined4 param_3)

{
  short sVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  float10 fVar8;
  undefined4 uVar9;
  int *piStack_2c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006deee8;
  pvStack_c = ExceptionList;
  piStack_2c = param_2;
  ExceptionList = &pvStack_c;
  FUN_005bd7d0();
  piStack_2c = param_2;
  FUN_0059ed70();
  piStack_2c = param_2;
  FUN_005bdff0();
  if (*(short *)(param_1 + 0x42) != 0) {
    piStack_2c = (int *)0x5bb41e;
    fVar8 = (float10)(**(code **)(*(int *)(param_1 + 0xdc) + 0x14))();
    if (fVar8 < (float10)DAT_006e92e8 == (NAN(fVar8) || NAN((float10)DAT_006e92e8)))
    goto LAB_005bb4b5;
  }
  param_3 = 5;
  piStack_2c = (int *)0x5bb43f;
  piVar3 = (int *)FUN_005af120();
  piStack_2c = (int *)0x5bb449;
  (**(code **)(*piVar3 + 0x154))();
  piVar3 = (int *)(param_1 + 0xdc);
  piStack_2c = piVar3;
  FUN_00541cc0(4);
  FUN_004258d0(&piStack_2c);
  (**(code **)(*piVar3 + 4))();
  FUN_00549470(param_1 + 0xe0);
  FUN_00549580(param_1 + 0xe0);
  uVar9 = 0x3f400000;
  uVar4 = FUN_0053cc70(s_sleep_tail_00745940);
  FUN_005434b0(uVar4,uVar9);
  (**(code **)(*piVar3 + 0x10))(0x3f800000);
LAB_005bb4b5:
  piStack_2c = (int *)0x5bb4bc;
  FUN_005bdba0();
  piStack_2c = param_2;
  FUN_005bd970();
  if (*(float *)(param_1 + 0x88) < _DAT_006f434c) {
    sVar1 = *(short *)(param_1 + 0x42);
    if (sVar1 == 5) {
      if (*(int *)(param_1 + 0x148) == 0) {
        if (*(int *)(param_1 + 0x120) != 0) {
          param_3 = 7;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x148) = 0;
        param_3 = 6;
      }
    }
    else if (sVar1 == 6) {
      if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) {
        iVar6 = *(int *)(*(int *)(param_1 + 0x138) + *(int *)(param_1 + 0x14c) * 4);
        uVar7 = *(uint *)(iVar6 + 8);
        uVar2 = *(uint *)(iVar6 + 0xc);
        piStack_2c = (int *)s_obj_mgr__LockObject_Guid__0071cef0;
        FUN_00649600();
        iVar5 = (int)*(short *)(&DAT_0076cd88 + ((uVar7 ^ uVar2) * -0xfb & 0xfff) * 2);
        for (iVar6 = iVar5; iVar6 != -1; iVar6 = (int)*(short *)(DAT_0076f648 + iVar6 * 0x14 + 0xe))
        {
        }
        for (; iVar5 != -1; iVar5 = (int)*(short *)(DAT_0076f648 + iVar5 * 0x14 + 0xe)) {
          iVar6 = *(int *)(DAT_0076f648 + iVar5 * 0x14);
          if (((iVar6 != 0) && (*(uint *)(iVar6 + 8) == uVar7)) && (*(uint *)(iVar6 + 0xc) == uVar2)
             ) {
            if (iVar5 != -1) {
              uVar7 = *(uint *)(DAT_0076f648 + iVar5 * 0x14);
              uStack_4 = 0xffffffff;
              uVar7 = -(uint)((*(byte *)(uVar7 + 0x7f) & 0x10) != 0) & uVar7;
              piStack_2c = (int *)0x5bb5fe;
              FUN_00649720();
              if (uVar7 != 0) {
                piStack_2c = (int *)0x1;
                FUN_004c75f0();
                *(ushort *)(uVar7 + 0x15a) = *(ushort *)(uVar7 + 0x15a) & 0xbfff ^ 0x4000;
              }
              ExceptionList = pvStack_c;
              return 5;
            }
            break;
          }
        }
        uStack_4 = 0xffffffff;
        piStack_2c = (int *)0x5bb5cc;
        FUN_00649720();
        param_3 = 5;
      }
    }
    else if ((sVar1 == 7) && ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0)) {
      param_3 = 5;
    }
  }
  else {
    piStack_2c = (int *)0x5bb4de;
    FUN_005bdb70();
  }
  ExceptionList = pvStack_c;
  return param_3;
}

