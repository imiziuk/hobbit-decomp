
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0040e320(int *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  
  while( true ) {
    if (*param_1 == 0 && param_1[1] == 0) {
      uVar2 = FUN_0054bad0(0x2d,0,0);
      *(undefined8 *)param_1 = uVar2;
      piVar1 = (int *)FUN_004021c0(uVar2);
      FUN_00488c30(s_Steam_0071e6bc);
      (**(code **)(*piVar1 + 0xfc))(0x40400000,0x40400000,0x40400000);
      FUN_004021c0(param_1[4],param_1[5]);
      (**(code **)(*piVar1 + 0x14))(&stack0xffffffdc,0);
    }
    piVar1 = (int *)FUN_004021c0(*param_1,param_1[1]);
    if ((piVar1 != (int *)0x0) || (*param_1 == 0 && param_1[1] == 0)) break;
    *param_1 = 0;
    param_1[1] = 0;
  }
  (**(code **)(*piVar1 + 0x110))();
  return;
}

