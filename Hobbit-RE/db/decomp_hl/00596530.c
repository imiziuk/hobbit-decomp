
int __thiscall FUN_00596530(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dd320;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_PhysController__UpdatePhysState_007430bc);
  *(float *)(param_1 + 0x29c) = *(float *)(param_1 + 0x294) + *(float *)(param_1 + 0x29c);
  local_4 = 0;
  *(undefined4 *)(param_1 + 0x238) = 0;
  iVar8 = 1;
  *(float *)(param_1 + 0x2a4) = *(float *)(param_1 + 0x294) + *(float *)(param_1 + 0x2a4);
  switch(*(undefined4 *)(param_1 + 0x38)) {
  case 0:
    iVar8 = 1;
    goto switchD_0059659d_default;
  case 1:
    iVar8 = FUN_005967a0(param_2);
    break;
  case 2:
    iVar8 = FUN_00597640(param_2);
    break;
  case 3:
  case 9:
    iVar8 = FUN_005986a0(param_2);
    break;
  case 4:
    iVar8 = FUN_00597cf0(param_2);
    break;
  case 5:
    iVar8 = FUN_00598990(param_2);
    break;
  case 6:
    iVar8 = FUN_005989a0(param_2);
    break;
  case 7:
    iVar8 = FUN_00598b50(param_2);
    break;
  case 8:
    iVar8 = FUN_00598850(param_2);
    break;
  case 10:
    iVar8 = FUN_00598530(param_2);
    break;
  default:
    goto switchD_0059659d_default;
  }
  if (iVar8 != 0) {
switchD_0059659d_default:
    if (((((*(int *)(param_1 + 0x38) == 1) && (*(int *)(param_1 + 400) != 0)) &&
         (iVar3 = FUN_00566dd0(), iVar3 == 1)) &&
        (iVar3 = *(int *)(param_1 + 400), (*(byte *)(iVar3 + 0x5c) & 1) != 0)) &&
       (((*(byte *)(iVar3 + 4) & 2) == 0 || (*param_2 != 0)))) {
      uVar1 = *(uint *)(iVar3 + 0x10);
      uVar2 = *(uint *)(iVar3 + 0x14);
      FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
      iVar4 = (int)*(short *)(&DAT_0076cd88 + ((uVar1 ^ uVar2) * -0xfb & 0xfff) * 2);
      for (iVar3 = iVar4; iVar3 != -1; iVar3 = (int)*(short *)(DAT_0076f648 + iVar3 * 0x14 + 0xe)) {
      }
      if (iVar4 == -1) {
LAB_005966ed:
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_00649720();
      }
      else {
        do {
          piVar7 = (int *)(DAT_0076f648 + iVar4 * 0x14);
          iVar3 = *piVar7;
          if (((iVar3 != 0) && (*(uint *)(iVar3 + 8) == uVar1)) && (*(uint *)(iVar3 + 0xc) == uVar2)
             ) {
            if (iVar4 == -1) goto LAB_005966ed;
            uVar1 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
            local_4 = (uint)local_4._1_3_ << 8;
            piVar7 = (int *)(-(uint)((*(byte *)(uVar1 + 0x7f) & 0x10) != 0) & uVar1);
            FUN_00649720();
            if (piVar7 != (int *)0x0) {
              piVar5 = (int *)FUN_00592920();
              iVar3 = *piVar5;
              uVar6 = (**(code **)(*piVar7 + 0x28))(0);
              (**(code **)(iVar3 + 0x14))(uVar6);
            }
            goto LAB_0059673e;
          }
          iVar4 = (int)*(short *)((int)piVar7 + 0xe);
        } while (iVar4 != -1);
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_00649720();
      }
    }
  }
LAB_0059673e:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return iVar8;
}

