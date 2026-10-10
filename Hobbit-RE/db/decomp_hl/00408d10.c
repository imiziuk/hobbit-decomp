
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00408d10(int param_1,float param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uStack_64;
  float local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006ceb90;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0064afa0();
  local_4 = 0;
  if (*(int *)(param_1 + 0x108) != 0) {
    iVar2 = FUN_006710d0(0x5d,0);
    if ((iVar2 == 0) || (DAT_0075b6f0 != 0)) {
      DAT_0075b6f0 = 0;
    }
    else {
      DAT_0075b6f0 = 1;
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
    switch(*(undefined4 *)(param_1 + 0x10c)) {
    case 0:
      uVar4 = 0;
      FUN_0041bcc0(0);
      FUN_0041c2b0(uVar4);
      FUN_0064e870(6,s_MIRKWOOD_LEVEL_CODE__Bilbo_Input_0071da44);
      *(undefined4 *)(param_1 + 0x10c) = 1;
      break;
    case 1:
      iVar2 = FUN_0054c120(s_Bilbo_Start_0071d9d8,0);
      if ((iVar2 != 0) && (iVar2 = FUN_0046adc0(), iVar2 != 0)) {
        *(undefined4 *)(param_1 + 0x10c) = 9;
      }
      break;
    case 2:
      uVar9 = 0;
      uVar4 = 1;
      FUN_0041bcc0(1,0);
      FUN_00423c90(uVar4,uVar9);
      FUN_004f42b0(0x40000000);
      *(undefined4 *)(param_1 + 0x10c) = 10;
      break;
    case 4:
      *(undefined4 *)(param_1 + 0x10c) = 6;
      break;
    case 6:
      piVar3 = (int *)FUN_0054c120(s_Tutorial_Spider_0071da10,0);
      if (piVar3 != (int *)0x0) {
        iVar2 = (**(code **)(*piVar3 + 0x30))();
        local_60 = *(float *)(iVar2 + 4) + _DAT_006e9368;
        uStack_64 = 0;
        uStack_5c = 0;
        (**(code **)(*piVar3 + 0x1c))(&uStack_64);
      }
      *(undefined4 *)(param_1 + 0x10c) = 0xb;
      break;
    case 8:
      piVar3 = (int *)FUN_0054c120(s_Tutorial_Spider_0071da10,0);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0x13c))(2);
      }
      *(undefined4 *)(param_1 + 0x10c) = 0xc;
      break;
    case 9:
      uVar4 = FUN_006ab1a0(&DAT_0071da28,s_RING_TUTORIAL_01_PC_0071da30);
      FUN_0064b7b0(uVar4);
      FUN_00526640(&DAT_0071da20,local_58,0);
      *(undefined4 *)(param_1 + 0x110) = 0x40a00000;
      *(undefined4 *)(param_1 + 0x114) = 2;
      *(undefined4 *)(param_1 + 0x10c) = 0xd;
      break;
    case 10:
      uVar4 = FUN_006ab170(&DAT_0071da28,1);
      FUN_0064b7b0(uVar4);
      FUN_00526640(&DAT_0071da20,local_58,0);
      *(undefined4 *)(param_1 + 0x110) = 0x40a00000;
      *(undefined4 *)(param_1 + 0x114) = 4;
      *(undefined4 *)(param_1 + 0x10c) = 0xd;
      break;
    case 0xb:
      uVar4 = FUN_006ab170(&DAT_0071da28,2);
      FUN_0064b7b0(uVar4);
      FUN_00526640(&DAT_0071da20,local_58,0);
      *(undefined4 *)(param_1 + 0x114) = 8;
      *(undefined4 *)(param_1 + 0x10c) = 0xd;
      break;
    case 0xc:
      iVar2 = FUN_0054c120(s_Tutorial_Spider_0071da10,0);
      if (iVar2 != 0) {
        FUN_004a5790(0,0);
      }
      uVar4 = 1;
      FUN_0041bcc0(1);
      FUN_0041c2b0(uVar4);
      FUN_0064e870(6,s_MIRKWOOD_LEVEL_CODE__Bilbo_Input_0071d9e4);
      *(undefined4 *)(param_1 + 0x108) = 0;
      break;
    case 0xd:
      param_2 = *(float *)(param_1 + 0x110) - param_2;
      *(float *)(param_1 + 0x110) = param_2;
      if (param_2 < DAT_006e92e4 != (NAN(param_2) || NAN(DAT_006e92e4))) {
        *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0x114);
        *(undefined4 *)(param_1 + 0x114) = 0xe;
        *(undefined4 *)(param_1 + 0x110) = 0;
      }
    }
  }
  if ((DAT_00760104 != 0) && (DAT_0076010c != 0)) {
    if (*(int *)(param_1 + 0x118) != 0) {
      bVar1 = false;
      uVar4 = FUN_0054c5c0(0x11,s_C__projects_meridian_Support_Lev_0071d998,0x1b1);
      do {
        lVar8 = FUN_0054c790();
        fVar7 = (float)((ulonglong)lVar8 >> 0x20);
        local_60 = fVar7;
        if (lVar8 == 0) goto LAB_00409159;
        FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
        iVar5 = (int)*(short *)(&DAT_0076cd88 + (((uint)lVar8 ^ (uint)fVar7) * -0xfb & 0xfff) * 2);
        for (iVar2 = iVar5; iVar2 != -1; iVar2 = (int)*(short *)(DAT_0076f648 + iVar2 * 0x14 + 0xe))
        {
        }
        while (iVar5 != -1) {
          piVar3 = (int *)(DAT_0076f648 + iVar5 * 0x14);
          iVar2 = *piVar3;
          if (((iVar2 != 0) && (*(uint *)(iVar2 + 8) == (uint)lVar8)) &&
             (*(float *)(iVar2 + 0xc) == local_60)) {
            if (iVar5 != -1) {
              uVar6 = *(uint *)(DAT_0076f648 + iVar5 * 0x14);
              local_4 = (uint)local_4._1_3_ << 8;
              uVar6 = -(uint)((*(byte *)(uVar6 + 0x7f) & 0x10) != 0) & uVar6;
              FUN_00649720();
              goto LAB_00409132;
            }
            break;
          }
          iVar5 = (int)*(short *)((int)piVar3 + 0xe);
        }
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_00649720();
        uVar6 = 0;
LAB_00409132:
      } while (((*(byte *)(uVar6 + 0x194) & 4) == 0) || (iVar2 = FUN_0046adc0(), iVar2 != 0));
      bVar1 = true;
LAB_00409159:
      FUN_0054c880(uVar4);
      if (!bVar1) {
        FUN_0054e920(s_INFO_HELP_0071d98c,0x40a00000,1);
        *(undefined4 *)(param_1 + 0x118) = 0;
      }
    }
    if ((*(int *)(param_1 + 0x11c) == 0) && (iVar2 = FUN_00437330(5), iVar2 != 0)) {
      FUN_00500510();
      *(undefined4 *)(param_1 + 0x11c) = 1;
    }
  }
  local_4 = 0xffffffff;
  FUN_0064b190();
  ExceptionList = pvStack_c;
  return;
}

