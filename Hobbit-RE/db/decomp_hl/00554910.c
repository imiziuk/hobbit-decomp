
bool FUN_00554910(uint param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_ESI;
  undefined4 unaff_EDI;
  bool bVar6;
  undefined4 unaff_retaddr;
  int *in_stack_0000001c;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar4 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9c78;
  local_c = ExceptionList;
  bVar6 = false;
  if (param_2 == (char *)0x0) goto LAB_00554ede;
  if (*param_2 == '\0') {
    ExceptionList = &local_c;
    iVar1 = (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,param_1,param_3,1);
    bVar6 = iVar1 != 0;
    iVar1 = (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,param_1,unaff_retaddr,2);
    goto LAB_00554ecd;
  }
  ExceptionList = &local_c;
  iVar1 = FUN_00555ab0(&param_2,0);
  local_10 = FUN_00555900(&param_2);
  if ((iVar1 == 0x7fffffff) || (local_10 == 0x7fffffff)) {
    FUN_00649920(&stack0x00000010,s_PC_Stage_setupfailure__syntax_er_0073d5e8,param_1,param_2);
    local_4 = 0;
  }
  else {
    if ((iVar1 == 0x7ffffffe) || (local_10 != 0x7ffffff8)) {
      iVar3 = (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,param_1,0x1c,1);
      bVar6 = iVar3 != 0;
    }
    else {
      if (*in_stack_0000001c == -1) {
        *in_stack_0000001c = iVar1;
      }
      else if (*in_stack_0000001c != iVar1) {
        FUN_00649920(&stack0x00000010,s_PC_Stage_setupfailure__tried_to_s_0073d740,param_1,param_2);
        local_4 = 1;
        goto LAB_00554bec;
      }
      iVar1 = FUN_00555ab0(&param_2,0);
      local_10 = FUN_00555900(&param_2);
    }
    uVar2 = FUN_00555ab0(&param_2,0);
    in_stack_0000001c = (int *)FUN_00555900(&param_2);
    iVar3 = FUN_00555ab0(&param_2,0);
    if (iVar1 == 0x7fffffff) {
      ExceptionList = local_c;
      return false;
    }
    if (uVar2 == 0x7fffffff) {
      ExceptionList = local_c;
      return false;
    }
    if (iVar3 == 0x7fffffff) {
      ExceptionList = local_c;
      return false;
    }
    if (local_10 == 0x7fffffff) {
      ExceptionList = local_c;
      return false;
    }
    if (in_stack_0000001c == (int *)0x7fffffff) {
      ExceptionList = local_c;
      return false;
    }
    if (local_10 == 0x7ffffff9) {
      (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,param_1,param_3,iVar1);
      (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,param_1,unaff_retaddr,2);
      ExceptionList = local_c;
      return true;
    }
    if (in_stack_0000001c == (int *)0x7ffffff9) {
      if (uVar2 != 0x7ffffffe) {
        if ((local_10 < 4) || ((0xb < local_10 && (local_10 != 0x18)))) {
          FUN_00649920(&param_3,s_PC_Stage_setupfailure__bad_binar_0073d6cc,param_1,param_2);
          local_4 = 3;
          uVar4 = FUN_00649940();
          FUN_0064e7d0(uVar4);
          goto LAB_00554bfd;
        }
        iVar1 = (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,param_1,param_3,iVar1);
        if ((iVar1 != 0) || (bVar6)) {
          bVar6 = true;
        }
        else {
          bVar6 = false;
        }
        iVar1 = (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,param_1,unaff_retaddr,unaff_EDI);
        if ((iVar1 != 0) || (bVar6)) {
          bVar6 = true;
        }
        iVar1 = (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,param_1,local_c,unaff_ESI);
        goto LAB_00554ecd;
      }
      FUN_00649920(&stack0x00000010,s_PC_Stage_setupfailure__one_param_0073d700,param_1,param_2);
      local_4 = 2;
    }
    else if (uVar2 == 0x7ffffffe) {
      FUN_00649920(&stack0x00000010,s_PC_Stage_setupfailure__one_param_0073d690,param_1,param_2);
      local_4 = 4;
    }
    else {
      if (iVar3 != 0x7ffffffe) {
        if (local_10 == 7) {
          iVar5 = iVar3;
          if (in_stack_0000001c != (int *)0x4) goto LAB_00554e27;
LAB_00554c3c:
          iVar3 = (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,param_1,param_3,uVar2);
          if ((iVar3 != 0) || (bVar6)) {
            bVar6 = true;
          }
          iVar1 = (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,param_1,uVar2,iVar1);
          if ((iVar1 != 0) || (bVar6)) {
            bVar6 = true;
          }
          else {
            bVar6 = false;
          }
          iVar1 = (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,param_1,puStack_8,iVar5);
          if ((iVar1 != 0) || (bVar6)) {
            bVar6 = true;
          }
          iVar1 = (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,param_1,unaff_EDI,0x19);
        }
        else {
          if (local_10 == 4) {
            iVar5 = iVar1;
            iVar1 = iVar3;
            if (in_stack_0000001c != (int *)0x7) {
LAB_00554e27:
              FUN_00649920(&stack0x00000014,s_PC_Stage_setupfailure__unrecogni_0073d614,param_1,
                           param_2);
              local_4 = 6;
              uVar4 = FUN_00649940();
              FUN_0064e7d0(uVar4);
              local_4 = 0xffffffff;
              FUN_00649950();
              ExceptionList = local_c;
              return false;
            }
            goto LAB_00554c3c;
          }
          if ((local_10 != 0x7ffffffe) || (in_stack_0000001c != (int *)0x7ffffffd))
          goto LAB_00554e27;
          iVar5 = iVar1;
          param_1 = uVar2;
          if ((uVar2 & 0x10) != 0) {
            param_1 = uVar2 & 0xffffffef;
            iVar5 = iVar3;
            iVar3 = iVar1;
          }
          iVar1 = (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,uVar4,param_3,iVar3);
          if ((iVar1 != 0) || (bVar6)) {
            bVar6 = true;
          }
          else {
            bVar6 = false;
          }
          iVar1 = (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,uVar4,param_1,iVar5);
          if ((iVar1 != 0) || (bVar6)) {
            bVar6 = true;
          }
          if (unaff_ESI == 0x20) {
            if ((DAT_007f0fa0 & 0x800) == 0) goto LAB_00554de9;
            iVar1 = (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,uVar4,0x7ffffffe,0xc);
          }
          else if (unaff_ESI == 0x23) {
            if ((DAT_007f0fa0 & 0x2000) == 0) goto LAB_00554de9;
            iVar1 = (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,uVar4,0x7ffffffe,0xe);
          }
          else if (unaff_ESI == 0x22) {
            if ((DAT_007f0fa0 & 0x1000) == 0) {
LAB_00554de9:
              iVar1 = (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,uVar4,puStack_8,unaff_ESI);
              if ((iVar1 != 0) || (bVar6)) {
                bVar6 = true;
              }
              iVar1 = (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,uVar4,unaff_EDI,0x1a);
            }
            else {
              iVar1 = (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,uVar4,0x7ffffffe,0xd);
            }
          }
          else {
            if ((unaff_ESI != 0x21) || (-1 < (char)(DAT_007f0fa0 >> 8))) goto LAB_00554de9;
            iVar1 = (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,uVar4,0x7ffffffe,0x10);
          }
        }
LAB_00554ecd:
        if ((iVar1 != 0) || (bVar6)) {
          bVar6 = true;
        }
        else {
          bVar6 = false;
        }
LAB_00554ede:
        ExceptionList = local_c;
        return !bVar6;
      }
      FUN_00649920(&stack0x00000010,s_PC_Stage_setupfailure__two_param_0073d654,param_1,param_2);
      local_4 = 5;
    }
  }
LAB_00554bec:
  uVar4 = FUN_00649940();
  FUN_0064e7d0(uVar4);
LAB_00554bfd:
  local_4 = 0xffffffff;
  FUN_00649950();
  ExceptionList = local_c;
  return false;
}

