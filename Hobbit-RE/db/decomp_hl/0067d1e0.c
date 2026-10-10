
void FUN_0067d1e0(void)

{
  if (DAT_00808edc == 0) {
    if ((DAT_00808ed0 != 0) || (DAT_00808ed8 == 0)) {
      DAT_00808ebc = thunk_FUN_0064ffa0(DAT_00808ed8,DAT_00808ee0 + DAT_00808ec0 * 2 + DAT_00808ef4,
                                        s_C__projects_meridian_xCore_entro_007534f0,0xb6);
      DAT_00808ed4 = DAT_00808ebc + DAT_00808ef4;
      DAT_00808eb8 = DAT_00808ed4 + DAT_00808ee0;
      DAT_00808ee8 = (DAT_00808ed4 - DAT_00808ef0) + DAT_00808ee0;
      DAT_00808ed0 = 0;
      DAT_00808ed8 = DAT_00808ebc;
      FUN_00648600(DAT_00808ed4,0,DAT_00808ee0);
    }
    FUN_00648600(DAT_00808ebc,0,DAT_00808ef4);
    FUN_00648600(DAT_00808eb8,0xff,DAT_00808ec0 * 2);
    DAT_00808ecc = 0;
  }
  else if (DAT_00808ed8 != 0) {
    FUN_0064e7d0(s_TEXT__Freeing_buffers_007534a0);
    FUN_0064ff40(DAT_00808ed8,s_C__projects_meridian_xCore_entro_007534b8,0xa8);
    DAT_00808ed8 = 0;
    return;
  }
  return;
}

