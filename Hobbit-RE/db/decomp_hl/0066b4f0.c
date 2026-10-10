
void FUN_0066b4f0(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,int param_6)

{
  undefined4 uVar1;
  
  if (param_6 != 0) {
    if ((param_1[2] - *param_1 == 1) && (param_1[3] - param_1[1] == 1)) {
      FUN_0066c3a0(0,0x15);
      uVar1 = *param_2;
    }
    else {
      FUN_0066c3a0(1,0x15);
      FUN_0066ddd0(*param_2);
      FUN_0066dfc0((float)*param_1,(float)param_1[1],0x3a83126f);
      FUN_0066ddd0(*param_3);
      FUN_0066dfc0((float)*param_1,(float)(param_1[3] + -1),0x3a83126f);
      FUN_0066dfc0((float)*param_1,(float)(param_1[3] + -1),0x3a83126f);
      FUN_0066ddd0(*param_4);
      FUN_0066dfc0((float)(param_1[2] + -1),(float)(param_1[3] + -1),0x3a83126f);
      FUN_0066dfc0((float)(param_1[2] + -1),(float)(param_1[3] + -1),0x3a83126f);
      FUN_0066ddd0(*param_5);
      FUN_0066dfc0((float)(param_1[2] + -1),(float)param_1[1],0x3a83126f);
      FUN_0066dfc0((float)(param_1[2] + -1),(float)param_1[1],0x3a83126f);
      uVar1 = *param_2;
    }
    FUN_0066ddd0(uVar1);
    FUN_0066dfc0((float)*param_1,(float)param_1[1],0x3a83126f);
    FUN_0066d9a0();
    return;
  }
  FUN_0066c3a0(5,0x15);
  FUN_0066ddd0(*param_2);
  FUN_0066dfc0((float)*param_1,(float)param_1[1],0x3a83126f);
  FUN_0066ddd0(*param_3);
  FUN_0066dfc0((float)*param_1,(float)param_1[3],0x3a83126f);
  FUN_0066ddd0(*param_4);
  FUN_0066dfc0((float)param_1[2],(float)param_1[3],0x3a83126f);
  FUN_0066ddd0(*param_5);
  FUN_0066dfc0((float)param_1[2],(float)param_1[1],0x3a83126f);
  FUN_0066d9a0();
  return;
}

