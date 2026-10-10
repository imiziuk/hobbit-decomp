
undefined8 FUN_005c76a0(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_005c7750();
  if ((DAT_007baaf0 == 0x3ff) && (DAT_007baaf4 == 0)) {
    do {
      uVar1 = FUN_005c7750();
    } while (uVar1 <= DAT_007baaf8);
  }
  else if (uVar1 <= DAT_007baaf8) goto LAB_005c76e6;
  DAT_007baaf0 = 0;
  DAT_007baaf4 = 0;
  DAT_007baaf8 = uVar1;
LAB_005c76e6:
  uVar2 = DAT_007baaf0 & 0x3ff;
  DAT_007baaf4 = DAT_007baaf4 + (uint)(0xfffffffe < DAT_007baaf0);
  DAT_007baaf0 = DAT_007baaf0 + 1;
  return CONCAT44(((DAT_007baacc & 0x3f | DAT_007baac8 << 6) >> 4) << 10 |
                  ((DAT_007baacc & 0x3f) << 0x1c | uVar1 & 0xfffffff) >> 0x16,
                  (uVar1 & 0xfffffff) << 10 | uVar2);
}

