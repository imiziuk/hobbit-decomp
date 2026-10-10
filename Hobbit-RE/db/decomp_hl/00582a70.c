
void FUN_00582a70(char param_1,char param_2)

{
  undefined4 uVar1;
  bool bVar2;
  undefined4 uVar3;
  
  if (DAT_00771d24 == 6) {
    param_1 = '\0';
LAB_00582b16:
    (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x89,0);
    bVar2 = false;
    if (param_1 != '\0') {
      uVar1 = 1;
      uVar3 = 1;
      goto LAB_00582ac7;
    }
    uVar1 = 0;
  }
  else {
    if (DAT_00771d24 == 4) goto LAB_00582b16;
    if (DAT_00771d24 == 5) {
      param_1 = '\0';
    }
    if (param_2 == '\0') goto LAB_00582b16;
    (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x89,1);
    bVar2 = param_1 != '\0';
    uVar1 = 2;
  }
  uVar3 = 3;
LAB_00582ac7:
  FUN_0065bb10(uVar3);
  (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x91,uVar1);
  (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x92,2);
  (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x94,bVar2);
  return;
}

