
void FUN_00654510(byte *param_1,int param_2,byte *param_3,uint param_4)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint unaff_EBP;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  param_2 = param_2 * 0x7c;
  uVar1 = *(uint *)(&DAT_006f6d48 + param_2);
  uVar3 = param_4;
  pbVar7 = param_3;
  if ((*(int *)(&DAT_006f6cf4 + param_2) == 0x20) && (0 < (int)param_4)) {
    uVar3 = 0;
    pbVar2 = param_3;
    do {
      pbVar7 = pbVar2 + 4;
      unaff_EBP = (uint)(pbVar2[3] >> ((&DAT_006f6d30)[param_2] & 0x1f)) <<
                  ((byte)*(undefined4 *)(&DAT_006f6d1c + param_2) & 0x1f) &
                  *(uint *)(&DAT_006f6d44 + param_2) |
                  (uint)(pbVar2[2] >> ((&DAT_006f6d24)[param_2] & 0x1f)) <<
                  ((byte)*(undefined4 *)(&DAT_006f6d10 + param_2) & 0x1f) |
                  (uint)(pbVar2[1] >> ((&DAT_006f6d28)[param_2] & 0x1f)) <<
                  ((byte)*(undefined4 *)(&DAT_006f6d14 + param_2) & 0x1f) |
                  (uint)(*pbVar2 >> ((&DAT_006f6d2c)[param_2] & 0x1f)) <<
                  ((byte)*(undefined4 *)(&DAT_006f6d18 + param_2) & 0x1f) | uVar1;
      *(uint *)(pbVar7 + (int)(param_1 + (-4 - (int)param_3))) = unaff_EBP;
      param_4 = param_4 - 1;
      pbVar2 = pbVar7;
    } while (param_4 != 0);
  }
  param_4 = uVar3;
  if (*(int *)(&DAT_006f6cf4 + param_2) == 0x18) {
    pbVar2 = param_1;
    uVar4 = uVar3;
    if ((*(int *)(&DAT_006f6d10 + param_2) == 0x10) && (0 < (int)uVar3)) {
      uVar4 = 0;
      unaff_EBP = uVar3;
      do {
        *pbVar2 = pbVar7[2];
        pbVar2[1] = pbVar7[1];
        pbVar2[2] = *pbVar7;
        pbVar2 = pbVar2 + 3;
        pbVar7 = pbVar7 + 4;
        unaff_EBP = unaff_EBP - 1;
      } while (unaff_EBP != 0);
    }
    param_4 = uVar4;
    if ((*(int *)(&DAT_006f6d10 + param_2) == 0) && (0 < (int)uVar4)) {
      param_4 = 0;
      unaff_EBP = uVar4;
      do {
        *pbVar2 = *pbVar7;
        pbVar2[1] = pbVar7[1];
        pbVar2[2] = pbVar7[2];
        pbVar2 = pbVar2 + 3;
        pbVar7 = pbVar7 + 4;
        unaff_EBP = unaff_EBP - 1;
      } while (unaff_EBP != 0);
    }
  }
  uVar3 = param_4;
  if ((*(int *)(&DAT_006f6cf4 + param_2) == 0x10) && (0 < (int)param_4)) {
    uVar3 = 0;
    pbVar2 = param_1;
    pbVar8 = pbVar7;
    do {
      pbVar7 = pbVar8 + 4;
      iVar6 = CONCAT22((short)(unaff_EBP >> 0x10),
                       (ushort)(pbVar8[3] >> ((&DAT_006f6d30)[param_2] & 0x1f))) <<
              ((byte)*(undefined4 *)(&DAT_006f6d1c + param_2) & 0x1f);
      uVar4 = CONCAT22((short)(uVar1 >> 0x10),
                       (ushort)(pbVar8[2] >> ((&DAT_006f6d24)[param_2] & 0x1f))) <<
              ((byte)*(undefined4 *)(&DAT_006f6d10 + param_2) & 0x1f);
      uVar5 = CONCAT22((short)(uVar4 >> 0x10),
                       (ushort)(pbVar8[1] >> ((&DAT_006f6d28)[param_2] & 0x1f))) <<
              ((byte)*(undefined4 *)(&DAT_006f6d14 + param_2) & 0x1f);
      unaff_EBP = CONCAT22((short)((uint)iVar6 >> 0x10),
                           (ushort)iVar6 & *(ushort *)(&DAT_006f6d44 + param_2)) | uVar4 | uVar5 |
                  CONCAT22((short)(uVar5 >> 0x10),
                           (ushort)(*pbVar8 >> ((&DAT_006f6d2c)[param_2] & 0x1f))) <<
                  ((byte)*(undefined4 *)(&DAT_006f6d18 + param_2) & 0x1f) | uVar1;
      *(short *)pbVar2 = (short)unaff_EBP;
      param_4 = param_4 - 1;
      pbVar2 = pbVar2 + 2;
      pbVar8 = pbVar7;
    } while (param_4 != 0);
  }
  if ((*(int *)(&DAT_006f6cf4 + param_2) == 8) &&
     (pbVar2 = param_1, param_1 = (byte *)uVar3, 0 < (int)uVar3)) {
    do {
      *pbVar2 = (pbVar7[3] >> ((&DAT_006f6d30)[param_2] & 0x1f)) <<
                ((byte)*(undefined4 *)(&DAT_006f6d1c + param_2) & 0x1f) & (&DAT_006f6d44)[param_2] |
                (pbVar7[2] >> ((&DAT_006f6d24)[param_2] & 0x1f)) <<
                ((byte)*(undefined4 *)(&DAT_006f6d10 + param_2) & 0x1f) |
                (pbVar7[1] >> ((&DAT_006f6d28)[param_2] & 0x1f)) <<
                ((byte)*(undefined4 *)(&DAT_006f6d14 + param_2) & 0x1f) |
                (*pbVar7 >> ((&DAT_006f6d2c)[param_2] & 0x1f)) <<
                ((byte)*(undefined4 *)(&DAT_006f6d18 + param_2) & 0x1f) | (byte)uVar1;
      param_1 = (byte *)((int)param_1 - 1);
      pbVar2 = pbVar2 + 1;
      pbVar7 = pbVar7 + 4;
    } while (param_1 != (byte *)0x0);
  }
  return;
}

