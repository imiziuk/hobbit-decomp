
void FUN_006749a0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_00674970(*(undefined4 *)(param_1 + 0x10),param_2);
  uVar2 = 1;
  uVar1 = 1;
  if (param_3 == 1) {
    uVar1 = 3;
  }
  if (param_4 == 1) {
    uVar2 = 3;
  }
  (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,param_2,0xd,uVar1);
  (**(code **)(*DAT_007f1000 + 0xfc))(DAT_007f1000,param_2,0xe,uVar2);
  return;
}

