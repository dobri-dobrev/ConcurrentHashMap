


//Taken from class notes

class Bakery {
    private var flag:Rail[Boolean];
    private var label:Rail[Long];
    private var max:long;
    
    public def this(n:Long) {
      flag = new Rail[Boolean](n,false);
      label = new Rail[Long](n,0L);
      max = 0;
    }

    private def nextLabel() {
      // var max:Long = 0;
      // for (var i:Long = 0; i < label.size; i++) {
      //     if (label(i) > max) max = label(i);
      // }
      //return max+1;
      max++;
      return max;
    }

    private def someoneElseFirst(i:Long) {
      for (var k:Long = 0; k < label.size; k++) {
          if (flag(k) && 
        ((label(k) < label(i)) || ((label(k) == label(i)) && (k < i)))) 
        return true;
      }
      return false;
    }

    public def lock(i:Long) {
      // doorway section
      flag(i) = true;
      label(i) = nextLabel();
      
      // waiting section
      while (someoneElseFirst(i)) {System.threadSleep(1);}
    }
    
    public def unlock(i:Long) {
      flag(i) = false;
    }
}