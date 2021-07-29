C **********************************************************************
C
C WE CAN CALL F FROM HI-TECH C
C
      SUBROUTINE F(I, J)
      INTEGER I, J
      WRITE (3,100) I, J
  100 FORMAT(1X,'I=',I6,' J=',I6)
      J = I + 5
      RETURN
      END
