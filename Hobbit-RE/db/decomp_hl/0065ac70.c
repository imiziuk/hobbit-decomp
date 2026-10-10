
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0065ac70(uint *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  
  uVar1 = *param_2;
  param_1[1] = (uint)param_2[1];
  if ((uVar1 & 0x2000) == 0) {
    *param_1 = 0;
    param_1[0x10] = 0x3f800000;
    param_1[0xe] = 0x3f800000;
    param_1[0xd] = 0x3f800000;
    param_1[0xc] = 0x3f800000;
    param_1[8] = 0x3f800000;
    param_1[7] = 0x3f800000;
    param_1[6] = 0x3f800000;
    param_1[4] = 0x3f800000;
    param_1[2] = 0x3f800000;
    goto LAB_0065aece;
  }
  uVar1 = param_2[3];
  puVar3 = param_2 + 4;
  *param_1 = (uint)uVar1;
  if ((uVar1 & 1) == 0) {
LAB_0065accf:
    param_1[2] = 0x3f800000;
  }
  else {
    uVar2 = *puVar3;
    puVar3 = param_2 + 5;
    if (uVar2 == 0x4000) goto LAB_0065accf;
    param_1[2] = (uint)((float)uVar2 * _DAT_006f9434);
  }
  if ((uVar1 & 2) != 0) {
    uVar2 = *puVar3;
    puVar3 = puVar3 + 1;
    if (uVar2 == 0) {
      param_1[3] = 0;
    }
    else {
      param_1[3] = (uint)((float)uVar2 * _DAT_006f9430);
    }
  }
  if ((uVar1 & 4) == 0) {
LAB_0065ad25:
    param_1[4] = 0x3f800000;
  }
  else {
    uVar2 = *puVar3;
    puVar3 = puVar3 + 1;
    if (uVar2 == 0xffff) goto LAB_0065ad25;
    param_1[4] = (uint)((float)uVar2 * _DAT_006f9430);
  }
  if ((uVar1 & 8) != 0) {
    uVar2 = *puVar3;
    puVar3 = puVar3 + 1;
    if (uVar2 == 0) {
      param_1[5] = 0;
    }
    else {
      param_1[5] = (uint)((float)uVar2 * _DAT_006f9430);
    }
  }
  if ((uVar1 & 0x10) == 0) {
LAB_0065ad79:
    param_1[6] = 0x3f800000;
  }
  else {
    uVar2 = *puVar3;
    puVar3 = puVar3 + 1;
    if (uVar2 == 0xffff) goto LAB_0065ad79;
    param_1[6] = (uint)((float)uVar2 * _DAT_006f9430);
  }
  if ((uVar1 & 0x20) == 0) {
LAB_0065ada4:
    param_1[7] = 0x3f800000;
  }
  else {
    uVar2 = *puVar3;
    puVar3 = puVar3 + 1;
    if (uVar2 == 0xffff) goto LAB_0065ada4;
    param_1[7] = (uint)((float)uVar2 * _DAT_006f9430);
  }
  if ((uVar1 & 0x40) == 0) {
LAB_0065adcf:
    param_1[8] = 0x3f800000;
  }
  else {
    uVar2 = *puVar3;
    puVar3 = puVar3 + 1;
    if (uVar2 == 0xffff) goto LAB_0065adcf;
    param_1[8] = (uint)((float)uVar2 * _DAT_006f9430);
  }
  if ((char)uVar1 < '\0') {
    param_1[9] = (uint)*puVar3;
    puVar3 = puVar3 + 1;
  }
  if ((uVar1 & 0x100) != 0) {
    uVar2 = *puVar3;
    puVar3 = (ushort *)((int)puVar3 + 1);
    param_1[10] = (uint)((float)(byte)uVar2 * _DAT_006f942c);
  }
  if ((uVar1 & 0x200) != 0) {
    param_1[0xb] = (uint)(byte)*puVar3;
    puVar3 = (ushort *)((int)puVar3 + 1);
  }
  if ((uVar1 & 0x400) == 0) {
    param_1[0xc] = 0x3f800000;
  }
  else {
    uVar2 = *puVar3;
    puVar3 = (ushort *)((int)puVar3 + 1);
    param_1[0xc] = (uint)((float)(byte)uVar2 * _DAT_006ed3a4);
  }
  if ((uVar1 & 0x800) == 0) {
    param_1[0xd] = 0x3f800000;
  }
  else {
    uVar2 = *puVar3;
    puVar3 = (ushort *)((int)puVar3 + 1);
    param_1[0xd] = (uint)((float)(byte)uVar2 * _DAT_006f9428);
  }
  if ((uVar1 & 0x1000) == 0) {
    param_1[0xe] = 0x3f800000;
  }
  else {
    uVar2 = *puVar3;
    puVar3 = (ushort *)((int)puVar3 + 1);
    param_1[0xe] = (uint)((float)(byte)uVar2 * _DAT_006f9428);
  }
  if ((uVar1 & 0x2000) != 0) {
    param_1[0xf] = (uint)(byte)*puVar3;
    puVar3 = (ushort *)((int)puVar3 + 1);
  }
  if ((uVar1 & 0x4000) == 0) {
    param_1[0x10] = 0x3f800000;
  }
  else {
    uVar2 = *puVar3;
    puVar3 = (ushort *)((int)puVar3 + 1);
    param_1[0x10] = (uint)((float)(byte)uVar2 * _DAT_006f9428);
  }
  if ((short)uVar1 < 0) {
    param_1[0x11] = (uint)((float)(byte)*puVar3 * _DAT_006f9428);
    return;
  }
LAB_0065aece:
  param_1[0x11] = 0x3f800000;
  return;
}

