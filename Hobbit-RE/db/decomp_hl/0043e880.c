
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0043e880(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  float unaff_ESI;
  
  param_1[0x119b] = 0;
  param_1[0x1fe] = 0;
  param_1[0xe8c] = 0;
  param_1[0x1ef] = 0;
  param_1[0x1ee] = 0;
  param_1[0x1ed] = 0;
  if ((((param_1[0x236] != 0x1b) && (param_1[0x236] != 0x17)) && (param_1[0x113] == 0)) &&
     ((iVar1 = FUN_00467eb0(), iVar1 == 0 && (param_1[0x231] == 0)))) {
    iVar1 = *param_1;
    FUN_00434c10();
    uVar2 = __ftol();
    (**(code **)(iVar1 + 0x128))(uVar2);
    if ((NAN(unaff_ESI) || NAN(DAT_006e92e4)) == (unaff_ESI == DAT_006e92e4)) {
      FUN_0044c120(0xb,0x3f800000);
    }
  }
  return;
}

