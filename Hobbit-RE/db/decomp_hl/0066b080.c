
void FUN_0066b080(float *param_1,undefined4 param_2,int param_3)

{
  if (param_3 == 0) {
    FUN_0066c3a0(5,0x15);
    FUN_0066ddd0(param_2);
    FUN_0066dfc0(*param_1,param_1[1],0x3a83126f);
    FUN_0066dfc0(*param_1,param_1[3],0x3a83126f);
    FUN_0066dfc0(param_1[2],param_1[3],0x3a83126f);
    FUN_0066dfc0(param_1[2],param_1[1],0x3a83126f);
    FUN_0066d9a0();
    return;
  }
  if (((NAN(param_1[2] - *param_1) || NAN(DAT_006e92e8)) != (param_1[2] - *param_1 == DAT_006e92e8))
     && ((NAN(param_1[3] - param_1[1]) || NAN(DAT_006e92e8)) !=
         (param_1[3] - param_1[1] == DAT_006e92e8))) {
    FUN_0066c3a0(0,0x15);
    FUN_0066ddd0(param_2);
    FUN_0066dfc0(*param_1,param_1[1],0x3a83126f);
    FUN_0066d9a0();
    return;
  }
  FUN_0066c3a0(1,0x15);
  FUN_0066ddd0(param_2);
  FUN_0066dfc0(*param_1,param_1[1],0x3a83126f);
  FUN_0066dfc0(*param_1,param_1[3] - DAT_006e92e8,0x3a83126f);
  FUN_0066dfc0(*param_1,param_1[3] - DAT_006e92e8,0x3a83126f);
  FUN_0066dfc0(param_1[2] - DAT_006e92e8,param_1[3] - DAT_006e92e8,0x3a83126f);
  FUN_0066dfc0(param_1[2] - DAT_006e92e8,param_1[3] - DAT_006e92e8,0x3a83126f);
  FUN_0066dfc0(param_1[2] - DAT_006e92e8,param_1[1],0x3a83126f);
  FUN_0066dfc0(param_1[2] - DAT_006e92e8,param_1[1],0x3a83126f);
  FUN_0066dfc0(*param_1,param_1[1],0x3a83126f);
  FUN_0066d9a0();
  return;
}

