
void FUN_005c9fc0(undefined4 param_1)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 extraout_ECX;
  undefined4 uVar5;
  undefined4 unaff_retaddr;
  undefined4 uVar6;
  undefined4 uVar7;
  
  FUN_00559490(0,param_1,5);
  FUN_00559300(1,param_1,6,0xbf000000,0xbf000000,0x3ee66666,0x3ee66666,0x30000);
  FUN_00559490(2,param_1,0);
  iVar3 = FUN_00558b80();
  piVar1 = (int *)(&DAT_007bbb40 + iVar3 * 4);
  if (*piVar1 != 0) goto LAB_005ca0f3;
  FUN_0052a620();
  iVar3 = FUN_00558c80();
  if (iVar3 == 0) {
    iVar3 = FUN_00554750();
    if (iVar3 != 0) goto LAB_005ca041;
    uVar5 = 0;
  }
  else {
LAB_005ca041:
    uVar5 = 1;
  }
  iVar3 = FUN_00558c20();
  (**(code **)(*DAT_007f1000 + 0xd0))(DAT_007f1000);
  FUN_00554860(0,s__x__k_00746480,&DAT_0075b6e0);
  FUN_00554860(1,&PTR_LAB_0074647c,&DAT_0075b6e0);
  pcVar4 = s_x_d_c_00746474;
  if (iVar3 == 0) {
    pcVar4 = (char *)&PTR_LAB_00746470;
  }
  FUN_00554860(2,pcVar4,&DAT_0075b6e0);
  FUN_00554f30(2,unaff_retaddr,uVar5);
  FUN_00554f00(3);
  FUN_00555690(param_1);
  (**(code **)(*DAT_007f1000 + 0xd4))(DAT_007f1000,piVar1);
  FUN_00660b30(piVar1,FUN_00559540,0,1);
LAB_005ca0f3:
  (**(code **)(*DAT_007f1000 + 0xd8))(DAT_007f1000,*piVar1);
  uVar2 = __ftol();
  uVar7 = 0;
  uVar6 = 1;
  uVar5 = extraout_ECX;
  FUN_00413480(uVar2,uVar2,uVar2,0xff);
  FUN_00558d10(uVar5,uVar6,uVar7);
  return;
}

