
uint FUN_0068dc6e(void)

{
  byte bVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *unaff_EBX;
  byte *pbVar4;
  int local_8;
  
  puVar2 = (undefined4 *)unaff_EBX[5];
  local_8 = puVar2[1];
  pbVar4 = (byte *)*puVar2;
  if (local_8 == 0) {
    uVar3 = (*(code *)puVar2[3])();
    if ((char)uVar3 != '\0') {
      local_8 = puVar2[1];
      pbVar4 = (byte *)*puVar2;
      goto LAB_0068dc95;
    }
LAB_0068dd02:
    uVar3 = uVar3 & 0xffffff00;
  }
  else {
LAB_0068dc95:
    bVar1 = *pbVar4;
    local_8 = local_8 + -1;
    pbVar4 = pbVar4 + 1;
    if (local_8 == 0) {
      uVar3 = (*(code *)puVar2[3])();
      if ((char)uVar3 == '\0') goto LAB_0068dd02;
      local_8 = puVar2[1];
      pbVar4 = (byte *)*puVar2;
    }
    uVar3 = (uint)*pbVar4;
    if ((bVar1 != 0xff) || (uVar3 != 0xd8)) {
      *(undefined4 *)(*unaff_EBX + 0x14) = 0x34;
      *(uint *)(*unaff_EBX + 0x18) = (uint)bVar1;
      *(uint *)(*unaff_EBX + 0x1c) = uVar3;
      (**(code **)*unaff_EBX)();
    }
    unaff_EBX[0x5e] = uVar3;
    puVar2[1] = local_8 + -1;
    *puVar2 = pbVar4 + 1;
    uVar3 = CONCAT31((int3)((uint)(local_8 + -1) >> 8),1);
  }
  return uVar3;
}

