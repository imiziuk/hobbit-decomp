
void FUN_0066c340(void)

{
  undefined *puVar1;
  
  if (DAT_007f1600 != 0) {
    puVar1 = &DAT_007f1544;
    do {
      FUN_00662510(puVar1);
      puVar1 = puVar1 + 4;
    } while ((int)puVar1 < 0x7f1550);
    (**(code **)(*DAT_007f14e4 + 8))(DAT_007f14e4);
    FUN_0064ff40(DAT_007f14e8,s_C__projects_meridian_xCore_entro_00750350,0xf9);
    DAT_007f1600 = 0;
  }
  return;
}

