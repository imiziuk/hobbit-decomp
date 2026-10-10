
void FUN_00559100(undefined4 param_1,int param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  int unaff_EBX;
  int iVar3;
  undefined4 uVar4;
  
  pcVar1 = (char *)(param_3 * 0x78 + 0x238 + param_2);
  iVar2 = FUN_00549470(pcVar1 + 0x2c);
  if (iVar2 == 0) {
    return;
  }
  FUN_00674e30(iVar2,param_1);
  FUN_00549580(pcVar1 + 0x2c);
  iVar2 = *(int *)(pcVar1 + 4);
  iVar3 = -1;
  if (iVar2 == 0) {
    iVar3 = 1;
  }
  else if (iVar2 == 1) {
    iVar3 = 3;
  }
  else if (iVar2 == 2) {
    iVar3 = 2;
  }
  (**(code **)(*DAT_007f1000 + 0xfc))
            (DAT_007f1000,param_1,0xb,*(undefined1 *)(param_2 + 0x9bc + *pcVar1 * 2));
  if (iVar3 != -1) {
    (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,param_1,0xd,iVar3);
  }
  if (unaff_EBX != -1) {
    (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,param_1,0xe,unaff_EBX);
  }
  switch(*(undefined4 *)(pcVar1 + 0xc)) {
  case 0:
    (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,param_1,0x10,2);
    uVar4 = 2;
    goto LAB_00559230;
  case 1:
    (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,param_1,0x10,2);
    (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,param_1,0x11,2);
    uVar4 = 2;
    break;
  case 2:
    (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,param_1,0x10,1);
    uVar4 = 1;
LAB_00559230:
    (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,param_1,0x11,uVar4);
    (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,param_1,0x12,1);
    return;
  case 3:
    (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,param_1,0x15,DAT_007f0f7c);
    (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,param_1,0x10,3);
    (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,param_1,0x11,3);
    uVar4 = 1;
    break;
  default:
    goto switchD_00559214_default;
  }
  (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,param_1,0x12,uVar4);
switchD_00559214_default:
  return;
}

