
void __fastcall FUN_005c9070(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1[1] < 2) {
    iVar2 = 0;
    if (0 < param_1[8]) {
      iVar1 = 0;
      do {
        (**(code **)(*param_1 + 8))(*(undefined4 *)(param_1[9] + 8 + iVar1));
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 0x18;
      } while (iVar2 < param_1[8]);
    }
    FUN_0064ff40(param_1[9],s_C__projects_meridian_Support_Poo_00746434,0x57);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[1] = 0;
    param_1[0xe] = 1;
    return;
  }
  param_1[1] = param_1[1] + -1;
  return;
}

