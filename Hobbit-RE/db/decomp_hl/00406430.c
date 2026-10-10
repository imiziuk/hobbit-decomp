
void __fastcall FUN_00406430(int *param_1)

{
  int *piVar1;
  
  if (*param_1 == 0 && param_1[1] == 0) {
    piVar1 = (int *)FUN_0054c120(s_BilboMinecart_001_0071d08c,1);
  }
  else {
    piVar1 = (int *)FUN_004021c0(*param_1,param_1[1]);
  }
  if (piVar1 != (int *)0x0) {
    *param_1 = piVar1[2];
    param_1[1] = piVar1[3];
    param_1[5] = -0x3ac86e8f;
    param_1[6] = -0x3db728f6;
    param_1[7] = 0x454e4d48;
    param_1[0x29] = -0x404333db;
    param_1[0x2a] = 0x3d207b35;
    param_1[0x2b] = -0x3fb9628d;
    (**(code **)(*piVar1 + 0x14))(param_1 + 5,0);
    (**(code **)(*piVar1 + 0xf0))(param_1 + 0x29);
    (**(code **)(*piVar1 + 0xc4))();
  }
  return;
}

