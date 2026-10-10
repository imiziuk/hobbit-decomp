
void FUN_0066b290(int *param_1,undefined4 param_2,int param_3)

{
  if (param_3 != 0) {
    if ((param_1[2] - *param_1 == 1) && (param_1[3] - param_1[1] == 1)) {
      FUN_0066c3a0(0,0x15);
      FUN_0066ddd0(param_2);
    }
    else {
      FUN_0066c3a0(1,0x15);
      FUN_0066ddd0(param_2);
      FUN_0066dfc0((float)*param_1,(float)param_1[1],0x3a83126f);
      FUN_0066dfc0((float)*param_1,(float)(param_1[3] + -1),0x3a83126f);
      FUN_0066dfc0((float)*param_1,(float)(param_1[3] + -1),0x3a83126f);
      FUN_0066dfc0((float)(param_1[2] + -1),(float)(param_1[3] + -1),0x3a83126f);
      FUN_0066dfc0((float)(param_1[2] + -1),(float)(param_1[3] + -1),0x3a83126f);
      FUN_0066dfc0((float)(param_1[2] + -1),(float)param_1[1],0x3a83126f);
      FUN_0066dfc0((float)(param_1[2] + -1),(float)param_1[1],0x3a83126f);
    }
    FUN_0066dfc0((float)*param_1,(float)param_1[1],0x3a83126f);
    FUN_0066d9a0();
    return;
  }
  FUN_0066c3a0(5,0x15);
  FUN_0066ddd0(param_2);
  FUN_0066dfc0((float)*param_1,(float)param_1[1],0x3a83126f);
  FUN_0066dfc0((float)*param_1,(float)param_1[3],0x3a83126f);
  FUN_0066dfc0((float)param_1[2],(float)param_1[3],0x3a83126f);
  FUN_0066dfc0((float)param_1[2],(float)param_1[1],0x3a83126f);
  FUN_0066d9a0();
  return;
}

