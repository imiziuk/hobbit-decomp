
undefined1 * FUN_006546f0(byte *param_1,int param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  
  puVar2 = (undefined1 *)
           thunk_FUN_0064ff70(param_4 * 4,s_C__projects_meridian_xCore_x_fil_0074dbf0,0x1b0);
  if (param_3 == 4) {
    if (0 < param_4) {
      iVar4 = (param_4 - 1U >> 1) + 1;
      puVar3 = puVar2;
      do {
        puVar1 = (undefined1 *)(param_2 + (uint)(*param_1 >> 4) * 4);
        puVar3[3] = *(undefined1 *)(param_2 + 3 + (uint)(*param_1 >> 4) * 4);
        puVar3[2] = puVar1[2];
        puVar3[1] = puVar1[1];
        *puVar3 = *puVar1;
        puVar1 = (undefined1 *)(param_2 + (*param_1 & 0xf) * 4);
        puVar3[7] = puVar1[3];
        puVar3[6] = puVar1[2];
        puVar3[5] = puVar1[1];
        param_1 = param_1 + 1;
        iVar4 = iVar4 + -1;
        puVar3[4] = *puVar1;
        puVar3 = puVar3 + 8;
      } while (iVar4 != 0);
      return puVar2;
    }
  }
  else if ((param_3 == 8) && (puVar3 = puVar2, 0 < param_4)) {
    do {
      puVar1 = (undefined1 *)(param_2 + (uint)*param_1 * 4);
      puVar3[3] = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[1] = puVar1[1];
      param_1 = param_1 + 1;
      param_4 = param_4 + -1;
      *puVar3 = *puVar1;
      puVar3 = puVar3 + 4;
    } while (param_4 != 0);
  }
  return puVar2;
}

