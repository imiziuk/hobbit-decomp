
void FUN_005009c0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if ((DAT_00762008 < 0x80) && (param_2 != 0)) {
    FUN_00647d70(&DAT_00760808 + DAT_00762008 * 0x30,param_1,0x1f);
    *(int *)(&DAT_00760828 + DAT_00762008 * 0x30) = param_2;
    *(undefined4 *)(&DAT_0076082c + DAT_00762008 * 0x30) = param_3;
    *(undefined4 *)(&DAT_00760830 + DAT_00762008 * 0x30) = param_4;
    *(undefined4 *)(&DAT_00760834 + DAT_00762008 * 0x30) = 0;
    DAT_00762008 = DAT_00762008 + 1;
  }
  return;
}

