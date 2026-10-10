
undefined8 * __thiscall FUN_00649600(undefined8 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  
  if ((DAT_007ccfac != 0) && (DAT_007ccff0 != 0)) {
    for (piVar2 = (int *)DAT_007ccff4[3]; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
      if (*piVar2 == param_2) goto LAB_006496a7;
    }
    iVar1 = FUN_006496d0(&PTR_s_GLOBAL_0074c628,param_2);
    piVar2 = (int *)thunk_FUN_0064ff70(0x30,s_C__projects_meridian_xCore_x_fil_0074c900,0x295);
    *piVar2 = param_2;
    piVar2[6] = 0;
    piVar2[4] = 0;
    piVar2[5] = 0;
    piVar2[10] = 1;
    piVar2[1] = (int)DAT_007ccff4;
    piVar2[2] = DAT_007ccff4[3];
    piVar2[3] = 0;
    DAT_007ccff4[3] = (int)piVar2;
    piVar2[7] = iVar1;
    piVar2[8] = 0;
    piVar2[9] = 0;
    DAT_007ccfe0 = DAT_007ccfe0 + 1;
LAB_006496a7:
    DAT_007ccff4 = piVar2;
    if (DAT_007ccf28 != 0) {
      uVar3 = FUN_0064cb70();
      *param_1 = uVar3;
    }
  }
  return param_1;
}

