
void FUN_0065f960(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = param_1;
  iVar5 = (int)param_2 * 0x480;
  *(undefined4 *)(&DAT_007edb3c + iVar5) = *param_1;
  *(undefined4 *)(&DAT_007edb40 + iVar5) = param_1[1];
  *(undefined4 *)(&DAT_007edb44 + iVar5) = param_1[2];
  FUN_00406570(param_1 + 3);
  *(undefined4 *)(&DAT_007edb88 + iVar5) = param_1[0x13];
  *(undefined4 *)(&DAT_007edb8c + iVar5) = param_1[0x14];
  *(undefined4 *)(&DAT_007edb90 + iVar5) = param_1[0x15];
  *(undefined4 *)(&DAT_007edb94 + iVar5) = param_1[0x16];
  *(undefined4 *)(&DAT_007edb98 + iVar5) = param_1[0x17];
  *(undefined4 *)(&DAT_007edb9c + iVar5) = param_1[0x18];
  *(undefined4 *)(&DAT_007edba0 + iVar5) = param_1[0x19];
  *(undefined4 *)(&DAT_007edba4 + iVar5) = param_1[0x1a];
  *(undefined4 *)(&DAT_007edba8 + iVar5) = param_1[0x1b];
  *(undefined4 *)(&DAT_007edbac + iVar5) = param_1[0x1c];
  *(undefined4 *)(&DAT_007edbb0 + iVar5) = param_1[0x1d];
  *(undefined4 *)(&DAT_007edbb4 + iVar5) = param_1[0x1e];
  *(undefined4 *)(&DAT_007edbb8 + iVar5) = param_1[0x1f];
  *(undefined4 *)(&DAT_007edbbc + iVar5) = param_1[0x20];
  *(undefined4 *)(&DAT_007edbc0 + iVar5) = param_1[0x21];
  *(undefined4 *)(&DAT_007edbc4 + iVar5) = param_1[0x22];
  FUN_00406570(param_1 + 0x23);
  FUN_00406570(param_1 + 0x33);
  FUN_00406570(param_1 + 0x43);
  FUN_00406570(param_1 + 0x53);
  FUN_00406570(param_1 + 99);
  FUN_00406570(param_1 + 0x73);
  FUN_00406570(param_1 + 0x83);
  *(undefined4 *)(&DAT_007edd88 + iVar5) = param_1[0x93];
  param_2 = param_1 + 0x95;
  *(undefined4 *)(&DAT_007edd8c + iVar5) = param_1[0x94];
  puVar2 = (undefined4 *)(&DAT_007edd9c + iVar5);
  iVar3 = (int)param_1 - (int)(&DAT_007edb3c + iVar5);
  param_1 = (undefined4 *)0x6;
  do {
    FUN_004357e0(param_2);
    *puVar2 = *(undefined4 *)(iVar3 + (int)puVar2);
    param_2 = param_2 + 4;
    puVar2 = puVar2 + 4;
    param_1 = (undefined4 *)((int)param_1 + -1);
  } while (param_1 != (undefined4 *)0x0);
  iVar4 = iVar5 + 0x7eddf0;
  param_2 = (undefined4 *)0x6;
  do {
    FUN_0042fda0(iVar3 + iVar4);
    iVar4 = iVar4 + 0x10;
    param_2 = (undefined4 *)((int)param_2 + -1);
  } while (param_2 != (undefined4 *)0x0);
  puVar2 = (undefined4 *)(&DAT_007ede50 + iVar5);
  iVar4 = 0x12;
  do {
    *puVar2 = *(undefined4 *)((int)puVar2 + iVar3);
    puVar2 = puVar2 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puVar2 = (undefined4 *)(&DAT_007ede98 + iVar5);
  iVar4 = 0x12;
  do {
    *puVar2 = *(undefined4 *)((int)puVar2 + iVar3);
    puVar2 = puVar2 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puVar2 = (undefined4 *)(&DAT_007edee0 + iVar5);
  iVar4 = 0x12;
  do {
    *puVar2 = *(undefined4 *)((int)puVar2 + iVar3);
    puVar2 = puVar2 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puVar2 = (undefined4 *)(&DAT_007edf28 + iVar5);
  iVar4 = 0x12;
  do {
    *puVar2 = *(undefined4 *)((int)puVar2 + iVar3);
    puVar2 = puVar2 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  FUN_0042fda0(puVar1 + 0x10d);
  puVar2 = (undefined4 *)(&DAT_007edf80 + iVar5);
  iVar4 = 3;
  do {
    *puVar2 = *(undefined4 *)(iVar3 + (int)puVar2);
    puVar2 = puVar2 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puVar2 = (undefined4 *)(&DAT_007edf8c + iVar5);
  iVar4 = 3;
  do {
    *puVar2 = *(undefined4 *)(iVar3 + (int)puVar2);
    puVar2 = puVar2 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  FUN_004357e0(puVar1 + 0x117);
  *(undefined4 *)(&DAT_007edfa4 + iVar5) = puVar1[0x11a];
  *(undefined4 *)(&DAT_007edfa8 + iVar5) = puVar1[0x11b];
  puVar2 = (undefined4 *)(&DAT_007edfac + iVar5);
  iVar4 = 2;
  do {
    *puVar2 = *(undefined4 *)(iVar3 + (int)puVar2);
    puVar2 = puVar2 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puVar2 = (undefined4 *)(&DAT_007edfb4 + iVar5);
  iVar5 = 2;
  do {
    *puVar2 = *(undefined4 *)(iVar3 + (int)puVar2);
    puVar2 = puVar2 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}

